/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ff0ab0; name: FUN_01ff0ab0
 */


void FUN_01ff0ab0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  lVar7 = FUN_001511d0(param_1,1);
  lVar7 = *(long *)(lVar7 + ((ulong)(uint)-(int)lVar7 & 7));
  if ((*PTR_DAT_043836e0 != '\0') && (iVar6 = FUN_00155630(param_1,1,"class_cast"), iVar6 != 0)) {
    pcVar9 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar10 = FUN_01fdf8e0();
    lVar7 = (*pcVar9)(lVar7,uVar10);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar8 = FUN_001511d0(param_1,3);
  puVar11 = *(undefined8 **)(lVar8 + ((ulong)(uint)-(int)lVar8 & 7));
  if ((*PTR_DAT_04380d08 != '\0') && (iVar6 = FUN_00155630(param_1,3,"class_cast"), iVar6 != 0)) {
    pcVar9 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar10 = FUN_01756c9c();
    puVar11 = (undefined8 *)(*pcVar9)(puVar11,uVar10);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  puVar1 = (undefined8 *)(lVar7 + *param_2);
  uVar10 = puVar11[1];
  uVar3 = puVar11[2];
  *puVar1 = *puVar11;
  puVar1[2] = uVar3;
  uVar3 = puVar11[3];
  uVar4 = puVar11[4];
  uVar2 = puVar11[5];
  uVar5 = puVar11[6];
  puVar1[1] = uVar10;
  puVar1[5] = uVar2;
  puVar1[6] = uVar5;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  FUN_0014ff10(param_1,0);
  return;
}


