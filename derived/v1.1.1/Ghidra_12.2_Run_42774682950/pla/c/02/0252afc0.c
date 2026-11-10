/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0252afc0; name: FUN_0252afc0
 */


void FUN_0252afc0(undefined8 param_1,long *param_2)

{
  double dVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04383380 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_01fc2f7c();
    lVar3 = (*pcVar4)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  dVar1 = (double)FUN_00150a90(param_1,3,0);
  *(float *)(lVar3 + *param_2) = (float)dVar1;
  FUN_0014ff10(param_1,0);
  return;
}


