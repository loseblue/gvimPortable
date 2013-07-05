['This', 'source', 'code', 'property', 'Rockchip', 'information', 'contained', 'this', 'file', 'confidential', 'Distribution', 'reproduction', 'well', 'exploitation', 'transmisison', 'content', 'allowed', 'except', 'expressly', 'permitted', 'Infringements', 'result', 'damage', 'claims', 'Copyright', 'File', 'ITF_RR', 'Scope', 'Interface', 'Messages', 'provided', 'History', '#ifndef', '__ITF_RR_H__', '#define', '#include', 'sxs_type', 'cmn_defs', 'itf_msgc', 'itf_l1', 'ChanMode', 'possible', 'values', 'itf_api', 'Internal', 'Start', 'INTRABASE', 'RR_GPRS_BASE', 'HVY_RR', 'x0400', 'RR_INTRA_BASE', 'x8000', 'Primitive', 'definitions', 'RR_REINIT_REQ', 'RR_CONNECT_REQ', 'RR_CONNECT_CNF', 'RR_RELEASE_IND', 'RR_ABORT_REQ', 'RR_DATA_REQ', 'RR_DATA_IND', 'RR_CELL_IND', 'RR_CELL_RSP', 'RR_LOCUP_STA', 'RR_PAGING_IND', 'RR_KC_IND', 'RR_CIPH_IND', 'RR_CMK_IND', 'RR_CHANMODE_IND', 'RR_NW_SELMODE_REQ', 'RR_NW_LIST_REQ', 'RR_NW_LIST_ABORT_REQ', 'RR_NW_LIST_ABORT_IND', 'RR_NW_LIST_IND', 'RR_NW_SEL_REQ', 'RR_NW_RESEL_REQ', 'RR_NW_CS_REG_IND', 'RR_NW_PS_REG_IND', 'RR_QUAL_REPORT_REQ', 'RR_QUAL_REPORT_CNF', 'RR_CBCH_REQ', 'RR_NMO_CFG_REQ', 'RR_ENDCONGEST_IND', 'RR_CURCELL_INFO_REQ', 'RR_ADJCELL_INFO_REQ', 'RR_CURCELL_INFO_IND', 'RR_ADJCELL_INFO_IND', 'Structure', 'rr_ConnectReq_t', 'Direction', 'asks', 'establishment', 'connection', 'Comment', 'InterLayer', 'message', 'typedef', 'struct', 'Cause', 'Possible', 'causes', 'Always', 'RR_EMERG', 'Emergency', 'call', 'RR_REEST_TCHH', 'Reestablisht', 'after', 'loosing', 'TCHH', 'only', 'RR_REEST_TCHF', 'TCHF', 'RR_PAGRSP_ANYCH', 'Answer', 'paging', 'where', 'Channel', 'Needed', 'RR_PAGRSP_SDCCH', 'SDCCH', 'RR_PAGRSP_TCHF', 'RR_PAGRSP_TCH', 'RR_MO_TCHF', 'needed', 'RR_MO_TCHH', 'sufficient', 'RR_MO_SD_PROC', 'Procedure', 'that', 'completed', 'with', 'RR_LOCUP', 'Location', 'updating', 'RR_ONE_PHASE', 'phase', 'packet', 'access', 'RR_SGLE_TWO_PHASE', 'Single', 'block', 'Temporary', 'used', 'generate', 'channel', 'request', 'cause', 'RR_REEST', 'Call', 'RR_REPEAT_REEST', 'Repeat', 'RR_NB_CAUSE', 'excludes', 'internal', 'RR_NO_CAUSE', 'Message', 'Indicate', 'successful', 'body', 'rr_ReleaseInd_t', 'indicates', 'failed', 'establish', 'released', 'GprsResume', 'RR_NORMAL_RELEASE', 'RR_ACCESS_BARRED', 'also', 'RR_ASSIGNMENT_REJECT', 'RR_RANDOM_ACCESS_FAILURE', 'RR_CONNECTION_FAILURE', 'RR_NO_CELL', 'RR_BAD_STATE', 'GPRS', 'specific', 'reject', 'RR_ABNORMAL_REL_WAR', 'RR_ABNORMAL_REL_NOAR', 'RR_P_LOWER_LAYER_FAILURE', 'RR_TBF_END', 'RR_RESELECTION', 'RR_GPRS_RESUME_NS', 'Gprs', 'resume', 'significant', 'RR_GPRS_RESUME_KO', 'Resume', 'RR_GPRS_RESUME_OK', 'succeeded', 'RR_GPRS_SUSPENDED', 'transmission', 'signaling', 'header', 'reception', 'rr_CellInd_t', 'cell', 'camped', 'Arfcn', 'Bsic', 'bool', 'AttFlag', 'T3212Duration', 'AvailableServ', 'Cbch', 'Supported', 'CBCH', 'union', 'Network', 'Mode', 'Operation', 'Classmark2', 'RR_NO_SERVICE', 'RR_EMERGENCY_ONLY', 'RR_FULL_SERVICE', 'RR_EGPRS_OFFERED', 'RR_GPRS_PENDING', 'RR_GPRS_OFFERED', 'RR_NO_CBCH', 'RR_BASIC_CBCH', 'RR_EXTENDED_CBCH', 'RR_NMO1', 'mode', 'operation', 'RR_NMO2', 'RR_NMO3', 'rr_CellRsp_t', 'acknowledged', 'indicated', 'Request', 'abort', 'forward', 'last', 'received', 'rr_LocUpSta_t', 'location', 'update', 'been', 'done', 'EqPlmnChange', 'Status', 'EqPlmnListSize', 'EqPlmnList', 'LocUp', 'RR_REG_OK', 'registration', 'successfull', 'RR_REG_PENDING', 'known', 'RR_ILLEGAL_USR', 'IMSI', 'unknown', 'illegal', 'IMEI', 'accepted', 'RR_4_FAIL', 'made', 'attempts', 'without', 'success', 'RR_FBD_PLMN', 'PLMN', 'RR_NO_ROAM_LA', 'Roaming', 'Area', 'RR_FBD_LA', 'RR_NO_CELL_IN_LA', 'suitable', 'Cells', 'RR_SRVC_NOT_ALLOWD', 'Service', 'RR_USER_DETACH', 'Detach', 'following', 'user', 'COMPLETED', 'RR_P_REG_OK', 'RR_P_REG_PENDING', 'RR_P_ILLEGAL_USR', 'services', 'RR_P_SRVC_NOT_ALLOWD', 'RR_P_FBD_PLMN', 'RR_P_NO_ROAM_LA', 'RR_P_FBD_LA', 'RR_P_NO_CELL_IN_LA', 'RR_P_SRVC_NOT_ALLOWD_INPLMN', 'RR_P_NWK_DET', 'from', 'attach', 'shall', 'requested', 'rr_KcInd_t', 'give', 'ciphering', 'rr_CmkInd_t', 'gives', 'Classmark', 'MsCm2', 'rr_ChanModeInd_t', 'when', 'sent', 'same', 'they', 'defined', 'api_StackCfg_t', 'api_CcChanModeInd_t', 'rr_NwSelModeReq_t', 'selection', 'MANU', 'AUTO', 'RR_NW_AUTO', 'API_NW_AUTOMATIC_MODE', 'RR_NW_MANU', 'API_NW_MANUAL_MODE', 'api_NwSelModeReq_t', 'rr_NwSelReq_t', 'select', 'api_NwSelReq_t', 'rr_NwCsRegStaInd_t', 'current', 'regiostration', 'circuit', 'switch', 'RR_NW_NO_SVCE', 'API_NW_NO_SVCE', 'RR_NW_FULL_SVCE', 'API_NW_FULL_SVCE', 'Full', 'RR_NW_LTD_SVCE', 'API_NW_LTD_SVCE', 'Lmtd', 'Emerg', 'Only', 'RR_NW_NO_OUTGO', 'API_NW_NO_OUTGO', 'Allowed', 'RR_NW_REG_PENDING', 'API_NW_REG_PENDING', 'Reslt', 'api_NwCsRegStatusInd_t', 'rr_NwPsRegStaInd_t', 'Packet', 'api_NwPsRegStatusInd_t', 'rr_NwListInd_t', 'list', 'available', 'Plmns', 'Restriction', 'RR_PLMN_OK', 'API_PLMN_OK', 'RR_PLMN_FBD', 'API_PLMN_FBD', 'RR_MAX_AVAIL_PLMN', 'API_MAX_AVAIL_PLMN', 'api_NwListInd_t', 'api_NwListAbortInd_t', 'rr_NwListAbortInd_t', 'rr_NmoCfgReq_t', 'start', 'stop', 'taking', 'into', 'account', 'Stop', 'will', 'consider', 'TRUE', 'should', 'take', 'congestion', 'timer', 'expired', 'rr_QualReportReq_t', 'Requests', 'radio', 'signal', 'quality', 'report', 'api_QualReportReq_t', 'api_QualReportCnf_t', 'rr_QualReportCnf_t', 'rr_CurCellInfos', 'api_CurCellInfoReq_t', 'rr_CurCellInfoReq_t', 'api_CurCellInfoInd_t', 'rr_CurCellInfoInd_t', 'rr_AdjCellInfos', 'api_AdjCellInfoReq_t', 'rr_AdjCellInfoReq_t', 'api_AdjCellInfoInd_t', 'rr_AdjCellInfoInd_t', 'rr_CbchReq_t', 'listening', 'RR_CBCH_ON', 'RR_CBCH_OFF', 'FALSE', 'PACKET', 'SWITCH', 'INTERFACE', 'MAC_DLDATA_IND', 'MAC_ULACK_IND', 'MAC_ULDATA_REQ', 'MAC_TLLI_IND', 'MAC_CONTRES_IND', 'MAC_DLACK_REQ', 'MAC_ULSUSP_REQ', 'MAC_ULRES_REQ', 'RRP_CONNECT_REQ', 'RRP_DLCONNECT_IND', 'RRP_ULCONNECT_CNF', 'RRP_DLREL_IND', 'RRP_ULRELSTART_REQ', 'RRP_ULREL_IND', 'RRP_ULREL_REQ', 'RRP_CELLOPT_IND', 'MAC_PURGE_DATAQ_REQ', '#ifdef', 'STK_DUAL_SIM', '__GPRS__', 'RR_CONFLICONNECT_REQ', '#endif', '__EGPRS__', 'RRP_EGPRS_LOOPBACK_CMD', 'RR_PPAGING_IND', 'MAC_NEWTLLI_IND', 'RR_RAUPD_STA', 'RR_MMPPROC_IND', 'RR_PRELEASE_IND', 'RR_MMREADY_ST_IND', 'RR_GPRS_REQ', 'RR_SUSPEND_REQ', 'RR_ACCTECHTYPE_IND', 'MAC_NEW_TLLI_CNF', 'Structures', 'mac_DlDataInd_t', 'data', 'Interlayer', 'Frame', 'modulo', 'BitField', 'len_of_Ack', 'Es_p', 'BsnValid', 'Egprs', 'begin', 'position', 'MAC_EGPRS_RLCDATA_POS', 'Block', 'size', 'depending', 'MAC_DLDATASIZE_MCS1', 'MAC_DLDATASIZE_MCS2', 'MAC_DLDATASIZE_MCS3', 'MAC_DLDATASIZE_MCS4', 'MAC_DLDATASIZE_MCS5', 'MAC_DLDATASIZE_MCS6', 'MAC_DLDATASIZE_MCS7', 'MAC_DLDATASIZE_MCS8', 'MAC_DLDATASIZE_MCS9', '__MAC_CTRL_C__', 'macDLDataSizeMCS', '#else', 'extern', 'bits', 'significance', 'MAC_FB_IND', 'MAC_DLACKNACK_REQ', 'mac_AckNackInd_t', 'forwards', 'Uplink', 'Nack', 'emit', 'Downlink', 'MAC_ACKNACKDESC_SIZE', 'Desc', 'AckNack', 'Description', ' #ifdef', 'Fills_rest', 'Resegment', 'Pre_emptive', 'Len_comp', 'Start_colour', 'CRBB', 'Len_uncom', 'URBB', ' #endif', 'rrp_AccTechTypeList_t', 'Access', 'Technology', 'Type', 'network', 'AccTechType', 'mac_UlDataReq_t', 'send', 'Countdown', 'value', 'Indicators', 'TxIndReq', 'Send', 'Coding', 'Scheme', 'MAC_CS1', 'MAC_CS2', 'MAC_CS3', 'MAC_CS4', 'MAC_MCS1', 'MAC_MCS2', 'MAC_MCS3', 'MAC_MCS4', 'MAC_MCS5', 'MAC_MCS6', 'MAC_MCS7', 'MAC_MCS8', 'MAC_MCS9', 'MAC_MCS57', 'MAC_MCS69', 'CountdownValue', 'MAC_CV_MAX', 'change', 'shift', 'MAC_TI_ON', 'MAC_SI_ON', 'MAC_PI_ON', 'mac_TlliInd_t', 'TLLI', 'mac_NewTlliInd_t', 'NewTlli', 'mac_ContResInd_t', 'contentions', 'resolution', 'mac_UlSuspReq_t', 'suspend', 'itself', 'mac_UlResReq_t', 'rrp_ConnectReq_t', 'ChanReqDesc', 'RadioPrio', 'NbBlocks', 'encoding', 'RlcMode', 'EgLoopBack', 'DlTsOff', 'ForceUlGmsk', 'RR_NO_PFI', 'Specific', 'RRP_NBBLOCKS_INVALID', 'opend', 'ended', 'more', 'than', 'blocks', 'RRP_USER_DATA', 'Values', 'comes', 'ACCESS_TYPE', 'RRP_PAGE_RSP', 'Resource', 'RRP_CELL_UPDATE', 'RRP_MM_PROCEDURE', 'RRP_RLCACK_MODE', 'RRP_RLCUNACK_MODE', 'RRP_EGPRS_LOOPBACK_MODE_OFF', 'RRP_EGPRS_LOOPBACK_MODE_ON', 'rrp_DlConnectInd_t', 'downlink', 'DlTsAlloc', 'bit8', 'bit7', 'TBF_Mode', 'EG_WS', 'rrp_Egprs_LoopBackCmd_t', 'loopback', 'Egprs_LoopBack_Mode', 'rrp_UlConnectCnf_t', 'uplink', 'PanDec', 'RR_NO_PAN_DEC', 'PanInc', 'RR_NO_PAN_INC', 'PanMax', 'RR_NO_PAN_MAX', 'TlliBlockCS', 'RRP_TLLIBLK_CS1', 'RRP_TLLIBLK_REG', 'BsCvMax', 'CloseEnded', 'RRP_ULCON_UNCHANGE', 'RRP_ULCON_CLOSEEND', 'RRP_ULCON_OPENEND', 'assigned', 'RRP_USFGRAN_OFF', 'RRP_USFGRAN_ONN', 'RRP_USFGRAN_SAB', 'Same', 'Before', 'UsfGranularity', 'ContResOn', 'PfcNwkSupp', 'BlockGranted', 'rrp_DlRelInd_t', 'rrp_UlStartRelReq_t', 'procedure', 'rrp_UlRelInd_t', 'rrp_UlReleaseReq_t', 'release', 'RRP_REL_NOR', 'RRP_REL_ABWAR', 'ALERT', 'these', 'changed', 'RRP_REL_ABCELLRESEL', 'rrp_CellOptInd_t', 'Cell', 'options', 'IsNewCell', 'event', 'because', 'rr_PPagingInd_t', 'PPaging', 'rr_RaUpSta_t', 'results', 'LocUpSatus', 'rr_MmpProcInd_t', 'ATTACH', 'UPDATE', 'rr_MmpReadyStInd', 'Entering', 'Leaving', 'Ready', 'State', 'means', 'ReadySt', 'IsRdyTimerEqZero', 'rr_MmpReadyStInd_t', 'rr_GprsReq_t', 'service', 'wanted', 'Wanted', 'otherwise', 'mac_NewTlliCnf_t', 'informs', 'frame', 'Tlli']
