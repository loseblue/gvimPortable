['This', 'source', 'code', 'property', 'Rockchip', 'information', 'contained', 'this', 'file', 'confidential', 'Distribution', 'reproduction', 'well', 'exploitation', 'transmisison', 'content', 'allowed', 'except', 'expressly', 'permitted', 'Infringements', 'result', 'damage', 'claims', 'Copyright', 'File', 'ITF_RLC', 'Scope', 'Interface', 'Messages', 'provided', 'entity', 'History', '#ifndef', '__ITF_RLC_H__', '#define', '#include', 'sxs_type', 'cmn_defs', 'itf_msgc', 'itf_api', 'Internal', 'Start', 'RLU_INTRA_BASE', 'HVY_RLU', 'x8000', 'Primitive', 'definitions', 'RLU_DATA_REQ', 'RLU_QUEUECREATE_IND', 'RLU_QUEUEDATA_REQ', 'SXS_TIMER_EVT_ID', 'RLU_TESTMODE_REQ', 'RLU_TREADY_REQ', 'RLU_TREADY_IND', 'RLU_SYNCH_IND', 'RLU_ULCONGEST_IND', 'RLU_SUSPEND_REQ', 'RLU_RESUME_REQ', 'RLU_PURGE_REQ', '#ifdef', '__EGPRS__', 'RLU_EGPRS_LOOP_BACK_MODE', '#endif', 'RLD_DATA_IND', 'HVY_RLD', 'Interlayer', 'message', 'specific', 'fields', 'rld_DataInd_t', 'RLD_TEST_DATA_REQ', 'RLD_TEST_MODE_REQ', 'defines', 'RLD_MAX_SDU', 'Structure', 'rlu_DataReq_t', 'Direction', 'asks', 'transmission', 'Comment', 'InterLayer', 'typedef', 'struct', 'Cause', 'Purpose', 'Mode', 'mode', 'Prio', 'Radio', 'priority', 'Channel', 'Request', 'Description', 'value', 'Class', 'Peak', 'throughput', 'class', 'Packet', 'Flow', 'Identifier', 'PType', 'type', 'section', 'PAction', 'Supplementary', 'action', 'requested', 'TReady', 'when', 'sent', 'interface', 'inform', 'from', 'peer', 'Reference', 'with', 'about', 'sending', 'Possible', 'values', 'CHANGE', 'These', 'MUST', 'MATCH', 'itf_rr', 'cause', 'rrp_ConnectReq_t', 'RLU_USER_DATA', 'RLU_PAGE_RSP', 'RLU_CELL_UPDATE', 'RLU_MM_PROCEDURE', 'special', 'some', 'frame', 'example', 'RLU_LLC_CTRL_FLG', 'RLU_LLC_CTRL', 'RlcMode', 'RLU_ACK_MODE', 'RLU_UACK_MODE', 'RLU_NO_MODE', 'other', 'valid', 'range', 'RLU_NO_PFI', 'RLU_SACK', 'SACK', 'RLU_NOT_SACK', 'than', 'RLU_NO_ACTION', 'RLU_START_TREADY', 'RLU_INFORM_ON_TX', 'RLU_INFORM_ON_ACK', 'rlu_QueueCreateInd_t', 'Message', 'gives', 'Queue', 'shared', 'queue', 'between', 'used', 'pass', 'RluDataReq', 'QueueId', 'rlu_TestModeReq_t', 'provides', 'applicable', 'test', 'parameters', 'PduNumber', 'Number', 'PDUs', 'Test', 'DlTsOff', 'Downlink', 'Timeslot', 'Offset', 'RLU_TST_MODE_A', 'RLU_TST_MODE_B', 'RLU_LOOP_BACK_MODE', 'TestMode', 'UlNts', 'rld_TestModeReq_t', 'rlu_TReadyReq_t', 'configures', 'status', 'READY', 'Timer', 'orders', 'stop', 'timer', 'Command', 'bitmap', 'bool', 'TActive', 'Activated', 'TRUE', 'deactivated', 'FALSE', 'TValue', 'Value', 'starting', 'frames', 'RLU_TREADY_CFG', 'RLU_TREADY_STOP', 'rlu_TReadyInd_t', 'Status', 'RLU_TREADY_STARTED', 'RLU_TREADY_EXPIRED', 'rlu_SynchInd_t', 'informs', 'that', 'happened', 'rlu_LoopBackModeReq_t', 'RLU_EGLOOPBACKMODE_REQ', 'order', 'enter', 'EGPRS', 'Loop', 'Back', 'ForceUlGmsk', 'Uplink', 'modulation', 'rlu_EgprsLoopBackMode_t', 'RLU_GMSK_ONLY', 'RLU_GMSK_OR_8PSK', 'rlu_CongestInd_t', 'uplink', 'contestion', 'changed', 'api_UlCongestInd_t', 'rlu_UlCongestInd_t', 'RLU_ULCONG_OFF', 'API_PS_ULCONG_OFF', 'congestion', 'RLU_ULCONG_ON', 'API_PS_ULCONG_ON', 'radio', 'path', 'congested', 'forwarding', 'TLLI', 'receiving', 'enum', 'PS_TYPE', 'PAD_TYPE', 'NO_PAD', 'CS_Type', 'RLC_MCS1', 'RLC_MCS2', 'RLC_MCS3', 'RLC_MCS4', 'RLC_MCS5', 'RLC_MCS6', 'RLC_MCS7', 'RLC_MCS8', 'RLC_MCS9', '__ITF_RLU_VAR__', 'const', 'Cps_Type1_Table', 'Cps_Type2_Table', 'Cps_Type3_Table', '#else', 'extern', '__ITF_RLU_H__']
