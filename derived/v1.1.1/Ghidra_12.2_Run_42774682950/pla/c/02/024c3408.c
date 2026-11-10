/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024c3408; name: FUN_024c3408
 */


void FUN_024c3408(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 3);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar5 = *(undefined8 **)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((DAT_043e6e20 != '\0') && (iVar1 = FUN_00155630(param_1,iVar1 + 3,"class_cast"), iVar1 != 0))
  {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_024a8d20();
    puVar5 = (undefined8 *)(*pcVar3)(puVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar2 = *param_3;
  uVar4 = *puVar5;
  *(undefined4 *)((undefined8 *)(param_4 + lVar2) + 1) = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)(param_4 + lVar2) = uVar4;
  return;
}


