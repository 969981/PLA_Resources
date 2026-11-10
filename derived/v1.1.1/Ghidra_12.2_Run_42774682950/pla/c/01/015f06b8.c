/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015f06b8; name: FUN_015f06b8
 */


void FUN_015f06b8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  iVar3 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar3 + 3);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar8 = *(undefined8 **)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_043804d0 != '\0') &&
     (iVar3 = FUN_00155630(param_1,iVar3 + 3,"class_cast"), iVar3 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_015ee9ac();
    puVar8 = (undefined8 *)(*pcVar5)(puVar8,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  puVar1 = (undefined8 *)(param_4 + *param_3);
  uVar7 = puVar8[2];
  uVar6 = *puVar8;
  uVar2 = puVar8[1];
  *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar8 + 3);
  puVar1[1] = uVar2;
  puVar1[2] = uVar7;
  *puVar1 = uVar6;
  return;
}


