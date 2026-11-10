/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024d4918; name: FUN_024d4918
 */


void FUN_024d4918(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *__src;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 3);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  __src = *(void **)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((DAT_043e7410 != '\0') && (iVar1 = FUN_00155630(param_1,iVar1 + 3,"class_cast"), iVar1 != 0))
  {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_024bac2c();
    __src = (void *)(*pcVar3)(__src,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  memcpy((void *)(param_4 + *param_3),__src,0xd8);
  return;
}


