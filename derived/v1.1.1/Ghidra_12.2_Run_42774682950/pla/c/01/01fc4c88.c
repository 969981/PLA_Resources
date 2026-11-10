/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fc4c88; name: FUN_01fc4c88
 */


void FUN_01fc4c88(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  iVar4 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar4 + 3);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar8 = *(undefined8 **)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_04383380 != '\0') &&
     (iVar4 = FUN_00155630(param_1,iVar4 + 3,"class_cast"), iVar4 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_01fc2f7c();
    puVar8 = (undefined8 *)(*pcVar6)(puVar8,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  puVar1 = (undefined8 *)(param_4 + *param_3);
  uVar7 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[4];
  puVar1[3] = puVar8[3];
  puVar1[4] = uVar3;
  puVar1[1] = uVar7;
  puVar1[2] = uVar2;
  uVar7 = puVar8[5];
  uVar2 = puVar8[6];
  uVar3 = puVar8[8];
  puVar1[7] = puVar8[7];
  puVar1[8] = uVar3;
  puVar1[5] = uVar7;
  puVar1[6] = uVar2;
  *puVar1 = *puVar8;
  return;
}


