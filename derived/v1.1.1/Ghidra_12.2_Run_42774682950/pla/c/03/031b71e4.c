/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b71e4; name: FUN_031b71e4
 */


undefined1  [16]
FUN_031b71e4(float param_1,undefined8 *param_2,undefined4 param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  float fVar6;
  float fVar9;
  undefined8 uVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined4 *local_88;
  undefined8 local_80;
  long local_78;
  undefined4 local_70 [2];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  uint local_30;
  ushort *local_28;
  undefined8 local_18;
  
  local_28 = (ushort *)param_2[0xc];
  local_78 = (ulong)CONCAT42((uint)*local_28 << 0x10,*local_28) << 0x10;
  pfVar2 = (float *)param_2[0x10];
  if ((pfVar2 != (float *)0x0) &&
     (lVar4 = (long)*(int *)(param_2 + 0x11), 0 < *(int *)(param_2 + 0x11))) {
    puVar5 = (uint *)param_2[0xf];
    do {
      if (*puVar5 == param_4) {
        local_78 = CONCAT44(*pfVar2 + (float)((ulong)local_78 >> 0x20),*pfVar2 + (float)local_78);
      }
      lVar4 = lVar4 + -1;
      pfVar2 = pfVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  plVar3 = (long *)param_2[4];
  local_80 = CONCAT44(param_1,param_1);
  if (plVar3 != (long *)0x0) {
    local_68 = param_2 + 6;
    uStack_58 = param_2[9];
    local_60 = param_2[8];
    lVar4 = param_2[2];
    local_18 = *(undefined8 *)
                (*(long *)(*(long *)(lVar4 + 0x20) + 0x18) + ((ulong)param_4 & 0x3fffff) * 8);
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(lVar4 + 0x20) + 0x38) + ((ulong)param_4 & 0x3fffff) * 0x10);
    uVar7 = *puVar1;
    local_48 = &local_18;
    fVar6 = (float)uVar7;
    fVar9 = (float)((ulong)uVar7 >> 0x20);
    fVar10 = (float)puVar1[1];
    local_40 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x60) >> 0x20) * fVar10 +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20) * fVar6 +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x50) >> 0x20) * fVar9,
                        (float)*(undefined8 *)(lVar4 + 0x70) +
                        (float)*(undefined8 *)(lVar4 + 0x60) * fVar10 +
                        (float)*(undefined8 *)(lVar4 + 0x40) * fVar6 +
                        (float)*(undefined8 *)(lVar4 + 0x50) * fVar9);
    uStack_38 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x78) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar4 + 0x68) >> 0x20) * fVar10 +
                         (float)((ulong)*(undefined8 *)(lVar4 + 0x48) >> 0x20) * fVar6 +
                         (float)((ulong)*(undefined8 *)(lVar4 + 0x58) >> 0x20) * fVar9,
                         (float)*(undefined8 *)(lVar4 + 0x78) +
                         (float)*(undefined8 *)(lVar4 + 0x68) * fVar10 +
                         (float)*(undefined8 *)(lVar4 + 0x48) * fVar6 +
                         (float)*(undefined8 *)(lVar4 + 0x58) * fVar9);
    local_30 = *param_5 | *(int *)(param_2 + 0xd) << 0x16;
    puStack_90 = param_2 + 10;
    local_98 = *param_2;
    local_88 = local_70;
    local_70[0] = param_3;
    local_50 = param_4;
    uVar7 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    local_78 = NEON_fmax(uVar7,0,4);
  }
  auVar8._0_4_ = param_1 + (float)local_78;
  auVar8._4_4_ = param_1 + (float)((ulong)local_78 >> 0x20);
  auVar8._8_8_ = 0;
  return auVar8;
}


