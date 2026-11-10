/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422790; name: FUN_00422790
 */


long * FUN_00422790(int *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *local_138;
  int local_130 [64];
  
  local_130[0] = param_3;
  if (param_3 == -1) {
    if (param_1 == (int *)0x0) {
      return (long *)0x0;
    }
    local_130[0] = *param_1;
  }
  local_138 = local_130;
  if ((DAT_0439e798 == 0) || (iVar1 = FUN_00407710(DAT_0439e798,local_130), iVar1 < 0)) {
    plVar3 = (long *)FUN_00408a60(&local_138,&PTR_DAT_04163f10,0x12,8,&LAB_00422d10);
    if (plVar3 == (long *)0x0) goto LAB_00422898;
    lVar2 = *plVar3;
  }
  else {
    lVar2 = FUN_00407970(DAT_0439e798,iVar1);
  }
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_004002a0(0x50,"external/openssl/crypto/evp/pmeth_lib.c",0x90);
    if (plVar3 == (long *)0x0) {
      FUN_004014b0(6,0x9d,0x41,"external/openssl/crypto/evp/pmeth_lib.c",0x95);
      return (long *)0x0;
    }
    *plVar3 = lVar2;
    plVar3[1] = param_2;
    *(undefined4 *)(plVar3 + 4) = 0;
    plVar3[2] = (long)param_1;
    if (param_1 != (int *)0x0) {
      FUN_004231b0(param_1);
    }
    if (*(code **)(lVar2 + 8) == (code *)0x0) {
      return plVar3;
    }
    iVar1 = (**(code **)(lVar2 + 8))(plVar3);
    if (iVar1 < 1) {
      *plVar3 = 0;
      FUN_00423420(plVar3[2]);
      FUN_00423420(plVar3[3]);
      FUN_00400420(plVar3,"external/openssl/crypto/evp/pmeth_lib.c",0x16b);
      return (long *)0x0;
    }
    return plVar3;
  }
LAB_00422898:
  FUN_004014b0(6,0x9d,0x9c,"external/openssl/crypto/evp/pmeth_lib.c",0x8c);
  return (long *)0x0;
}


