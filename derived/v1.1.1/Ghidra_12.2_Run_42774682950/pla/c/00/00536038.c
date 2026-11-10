/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536038; name: FUN_00536038
 */


void FUN_00536038(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = PTR_LAB_04374ba0;
  if (((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) && (*(long *)(*param_1 + 0x28) != 0)) {
    param_1[7] = (long)
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
    param_1[4] = (long)param_1;
    param_1[5] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    param_1[3] = (long)puVar1;
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 8) = 0xfb;
    if (param_1[0xc] != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0xfd,2,"assertion failed: %s","recv_trailing_metadata_ == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(param_2 + 8);
    param_1[0xc] = *(long *)(lVar3 + 0x70);
    param_1[0xb] = *(long *)(lVar3 + 0x80);
    *(long **)(lVar3 + 0x80) = param_1 + 2;
  }
  puVar2 = (undefined8 *)FUN_003d7730(param_1 + 0xe,0);
  if (PTR_DAT_04373ff8[0x10] != '\0') {
    FUN_003d3360("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0xb5,1,puVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x005360e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,param_2);
  return;
}


