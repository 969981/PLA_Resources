/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01304bd0; name: FUN_01304bd0
 */


void FUN_01304bd0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ushort *puVar12;
  undefined2 local_3a;
  undefined6 uStack_38;
  
  FUN_013046b0(param_1,param_1 + 0x18,param_1 + 0x30);
  if (param_1 + 0x48 != param_2) {
    lVar3 = 0;
    puVar5 = param_1 + 0x48;
    puVar12 = param_1 + 0x30;
    do {
      puVar4 = puVar5;
      uVar1 = *puVar4;
      if (uVar1 < *puVar12) {
        uVar6 = *(undefined8 *)(puVar4 + 1);
        uVar9 = *(undefined8 *)(puVar4 + 5);
        uVar7 = *(undefined8 *)(puVar4 + 9);
        uVar10 = *(undefined8 *)(puVar4 + 0xd);
        uVar11 = *(undefined8 *)(puVar4 + 0x11);
        uStack_38 = (undefined6)((ulong)*(undefined8 *)(puVar4 + 0x14) >> 0x10);
        local_3a = (undefined2)((ulong)uVar11 >> 0x30);
        lVar2 = lVar3;
        do {
          lVar8 = lVar2;
          *(undefined8 *)((long)param_1 + lVar8 + 0xa0) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x70);
          *(undefined8 *)((long)param_1 + lVar8 + 0xa8) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x78);
          *(undefined8 *)((long)param_1 + lVar8 + 0xb0) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x80);
          *(undefined8 *)((long)param_1 + lVar8 + 0xb8) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x88);
          *(undefined8 *)((long)param_1 + lVar8 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x60);
          *(undefined8 *)((long)param_1 + lVar8 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x68);
          if (lVar8 == -0x60) {
            puVar5 = param_1;
            goto LAB_01304c14;
          }
          lVar2 = lVar8 + -0x30;
        } while (uVar1 < *(ushort *)((long)param_1 + lVar8 + 0x30));
        puVar5 = (ushort *)((long)param_1 + lVar8 + 0x60);
LAB_01304c14:
        *puVar5 = uVar1;
        *(undefined8 *)(puVar5 + 5) = uVar9;
        *(undefined8 *)(puVar5 + 1) = uVar6;
        *(ulong *)(puVar5 + 0x14) = CONCAT62(uStack_38,local_3a);
        *(undefined8 *)(puVar5 + 0x11) = uVar11;
        *(undefined8 *)(puVar5 + 0xd) = uVar10;
        *(undefined8 *)(puVar5 + 9) = uVar7;
      }
      lVar3 = lVar3 + 0x30;
      puVar5 = puVar4 + 0x18;
      puVar12 = puVar4;
    } while (puVar4 + 0x18 != param_2);
  }
  return;
}


