<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: overlay.proto

namespace Protocol;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 *for getledgers
 *
 * Generated from protobuf message <code>protocol.GetLedgers</code>
 */
class GetLedgers extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int64 begin = 1;</code>
     */
    private $begin = 0;
    /**
     * Generated from protobuf field <code>int64 end = 2;</code>
     */
    private $end = 0;
    /**
     * Generated from protobuf field <code>int64 timestamp = 3;</code>
     */
    private $timestamp = 0;

    public function __construct() {
        \GPBMetadata\Overlay::initOnce();
        parent::__construct();
    }

    /**
     * Generated from protobuf field <code>int64 begin = 1;</code>
     * @return int|string
     */
    public function getBegin()
    {
        return $this->begin;
    }

    /**
     * Generated from protobuf field <code>int64 begin = 1;</code>
     * @param int|string $var
     * @return $this
     */
    public function setBegin($var)
    {
        GPBUtil::checkInt64($var);
        $this->begin = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>int64 end = 2;</code>
     * @return int|string
     */
    public function getEnd()
    {
        return $this->end;
    }

    /**
     * Generated from protobuf field <code>int64 end = 2;</code>
     * @param int|string $var
     * @return $this
     */
    public function setEnd($var)
    {
        GPBUtil::checkInt64($var);
        $this->end = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>int64 timestamp = 3;</code>
     * @return int|string
     */
    public function getTimestamp()
    {
        return $this->timestamp;
    }

    /**
     * Generated from protobuf field <code>int64 timestamp = 3;</code>
     * @param int|string $var
     * @return $this
     */
    public function setTimestamp($var)
    {
        GPBUtil::checkInt64($var);
        $this->timestamp = $var;

        return $this;
    }

}
