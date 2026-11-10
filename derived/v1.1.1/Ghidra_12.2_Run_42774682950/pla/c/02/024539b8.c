/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024539b8; name: FUN_024539b8
 */


void FUN_024539b8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 3);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar6 = *(undefined8 **)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04386848 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 3,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_023722ac();
    puVar6 = (undefined8 *)(*pcVar4)(puVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  puVar1 = (undefined8 *)(param_4 + *param_3);
  uVar7 = puVar6[2];
  uVar5 = puVar6[1];
  *puVar1 = *puVar6;
  puVar1[1] = uVar5;
  puVar1[2] = uVar7;
  uVar8 = puVar6[5];
  uVar5 = puVar6[3];
  uVar7 = puVar6[4];
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar6 + 6);
  puVar1[4] = uVar7;
  puVar1[5] = uVar8;
  puVar1[3] = uVar5;
  return;
}


