/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f6850; name: FUN_005f6850
 */


void FUN_005f6850(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_0418f230;
  if (PTR_DAT_04375170[0x10] != '\0') {
                    /* try { // try from 005f689c to 005f68bb has its CatchHandler @ 005f68c0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                 ,0x16e,1,"[xds_routing_lb %p] destroying xds_routing LB policy",param_1);
  }
  FUN_005f77ec(param_1 + 9,param_1[10]);
  FUN_005f7720(param_1[7]);
  FUN_00548ed0(param_1);
  return;
}


