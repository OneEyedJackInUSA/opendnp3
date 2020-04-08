/*
 * Copyright 2013-2019 Automatak, LLC
 *
 * Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
 * LLC (www.automatak.com) under one or more contributor license agreements. 
 * See the NOTICE file distributed with this work for additional information
 * regarding copyright ownership. Green Energy Corp and Automatak LLC license
 * this file to you under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package com.automatak.dnp3;

import com.automatak.dnp3.enums.TimestampQuality;

/**
 * Maps to g50v1
 */
public class DNPTime {

    public DNPTime(long msSinceEpoch)
    {
        this(msSinceEpoch, TimestampQuality.INVALID);
    }

    public DNPTime(long msSinceEpoch, TimestampQuality quality)
    {
        this.msSinceEpoch = msSinceEpoch;
        this.quality = quality;
    }

    public final long msSinceEpoch;
    public final TimestampQuality quality;

    @Override
    public String toString()
    {
        return String.format("DNPTime(%d)", msSinceEpoch);
    }
}
