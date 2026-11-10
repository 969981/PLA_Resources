/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02033cc8; name: FUN_02033cc8
 */


void FUN_02033cc8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

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
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 3,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00ea12ac();
    puVar5 = (undefined8 *)(*pcVar3)(puVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar2 = *param_3;
  uVar4 = puVar5[1];
  *(undefined8 *)(param_4 + lVar2) = *puVar5;
  ((undefined8 *)(param_4 + lVar2))[1] = uVar4;
  return;
}


