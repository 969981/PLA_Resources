/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00170fe0; name: FUN_00170fe0
 */


int FUN_00170fe0(undefined8 *param_1,uint param_2,undefined8 *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_44;
  
  iVar1 = FUN_001710e0(param_1,param_3,param_4);
  local_44 = *param_4;
  uVar4 = local_44;
  if (iVar1 == 7) {
    if (*(char *)*param_3 != '\0') {
      iVar2 = FUN_001710e0(param_1,param_3,&local_44);
      if ((iVar2 != 3) && (uVar4 = local_44, local_44 != 0)) goto LAB_0017106c;
    }
    uVar4 = local_44;
    FUN_00154010(*param_1,1,"invalid next option for option \'X\'");
  }
LAB_0017106c:
  uVar3 = 0;
  if ((iVar1 != 3) && (1 < (int)uVar4)) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar3 < (int)uVar4) {
      uVar4 = uVar3;
      local_44 = uVar3;
    }
    uVar3 = uVar4 - 1;
    if ((uVar4 & uVar3) != 0) {
      FUN_00154010(*param_1,1,"format asks for alignment not power of 2");
    }
    uVar3 = uVar4 - (uVar3 & param_2) & uVar3;
  }
  *param_5 = uVar3;
  return iVar1;
}


