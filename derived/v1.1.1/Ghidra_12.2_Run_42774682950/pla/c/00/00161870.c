/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00161870; name: FUN_00161870
 */


void FUN_00161870(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (char *)FUN_00151650(param_1,&DAT_039a01e3,param_3,&DAT_038c7be9);
  pcVar2 = getenv(pcVar2);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = getenv(param_3), pcVar2 != (char *)0x0)) {
    FUN_00151a70(param_1,0xfff0b9d8,"LUA_NOENV");
    iVar1 = FUN_00150cc0(param_1,0xffffffff);
    FUN_0014ff10(param_1,0xfffffffe);
    if (iVar1 == 0) {
      uVar3 = FUN_00155d30(param_1,pcVar2,&DAT_0398d442,&DAT_038ee31e);
      FUN_00155d30(param_1,uVar3,&DAT_03970709,param_4);
      FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_0016195c;
    }
  }
  FUN_00151570(param_1,param_4);
LAB_0016195c:
  FUN_00152550(param_1,0xfffffffd,param_2);
  FUN_0014ff10(param_1,0xfffffffe);
  return;
}


