/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3c44; name: FUN_002e3c44
 */


void FUN_002e3c44(undefined8 param_1,undefined8 param_2)

{
  byte local_28;
  undefined7 uStack_27;
  char cStack_20;
  undefined7 uStack_1f;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28 = 0x26;
  uStack_14 = 0;
  uStack_1f = s_grpc_service_config_0392e0c5._8_7_;
  uStack_18 = CONCAT31(0x676966,s_grpc_service_config_0392e0c5[0xf]);
  uStack_27 = s_grpc_service_config_0392e0c5._0_7_;
  cStack_20 = s_grpc_service_config_0392e0c5[7];
                    /* try { // try from 002e3c80 to 002e3c87 has its CatchHandler @ 002e3cac */
  FUN_002e3154(param_1,&local_28,param_2);
  if ((local_28 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_14,uStack_18));
  }
  return;
}


