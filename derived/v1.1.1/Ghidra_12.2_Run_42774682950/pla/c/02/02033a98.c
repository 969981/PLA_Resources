/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02033a98; name: FUN_02033a98
 */


void FUN_02033a98(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = param_2[1] + 3;
  iVar1 = FUN_00150310(param_1,iVar2);
  if (iVar1 == 0) {
    *param_2 = 1;
    uVar6 = 0;
    param_2[1] = param_2[1] + 1;
  }
  else {
    lVar3 = FUN_001511d0(param_1,iVar2);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
    if ((*PTR_DAT_04380660 != '\0') &&
       (iVar2 = FUN_00155630(param_1,iVar2,"class_cast"), iVar2 != 0)) {
      pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar5 = FUN_017aa43c();
      uVar6 = (*pcVar4)(uVar6,uVar5);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  *(undefined8 *)(param_4 + *param_3) = uVar6;
  return;
}


