/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010631c8; name: FUN_010631c8
 */


void FUN_010631c8(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437e2d0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_01063110();
    lVar2 = (*pcVar3)(lVar2,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar5 = *param_2;
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)*(float *)(lVar2 + lVar5),param_1);
  return;
}


