/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e6030; name: FUN_004e6030
 */


undefined8 FUN_004e6030(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(int **)(param_1 + 2) + 0x30);
  if (((((*(byte *)(lVar4 + 0x60) >> 3 & 1) == 0) &&
       (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
     ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) {
    iVar2 = FUN_004e7470(param_3);
  }
  else {
    iVar2 = (**(code **)(lVar4 + 0x50))(param_3);
  }
  iVar1 = 0x28;
  if (*param_1 != 0x300 || iVar2 != 0x46) {
    iVar1 = iVar2;
  }
  if (-1 < iVar1) {
    if ((param_2 == 2) && (*(long *)(param_1 + 0x142) != 0)) {
      FUN_003ffc50(*(undefined8 *)(param_1 + 0x1ca));
    }
    lVar4 = *(long *)(param_1 + 0x2a);
    *(undefined4 *)(lVar4 + 0xfc) = 1;
    *(char *)(lVar4 + 0x100) = (char)param_2;
    *(char *)(*(long *)(param_1 + 0x2a) + 0x101) = (char)iVar1;
    iVar2 = FUN_004c5db0(param_1 + 0x1fe);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004e6114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}


