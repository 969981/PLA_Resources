/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fe5a4; name: FUN_030fe5a4
 */


void FUN_030fe5a4(long param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (0 < *(int *)(param_1 + 0x15d4)) {
    if (((param_4 >> 2 & 1) == 0) || (*(char *)(param_1 + 0x15de) != '\0')) {
      uStack_48 = param_2[1];
      local_50 = *param_2;
      local_38 = param_2[3];
      uStack_40 = param_2[2];
      local_30 = CONCAT31(local_30._1_3_,(char)param_4);
      lVar2 = *(long *)(*(long *)(param_1 + 0x140) + 0x38) +
              ((ulong)*(uint *)(param_1 + 0x150) & 0xffffff) * 0xc0;
      iVar7 = -(uint)((float)*(undefined8 *)(lVar2 + 0x70) <= (float)uStack_40);
      iVar8 = -(uint)((float)((ulong)*(undefined8 *)(lVar2 + 0x70) >> 0x20) <=
                     (float)((ulong)uStack_40 >> 0x20));
      iVar9 = -(uint)((float)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) <= (float)local_38);
      iVar3 = -(uint)((float)local_50 <= (float)*(undefined8 *)(lVar2 + 0x60));
      iVar5 = -(uint)((float)((ulong)local_50 >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20));
      iVar6 = -(uint)((float)uStack_48 <= (float)*(undefined8 *)(lVar2 + 0x68));
      uVar4 = CONCAT13((byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar3 >> 0x18),
                       CONCAT12((byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar3 >> 0x10),
                                CONCAT11((byte)((uint)iVar7 >> 8) & (byte)((uint)iVar3 >> 8),
                                         (byte)iVar7 & (byte)iVar3)));
      if ((uVar4 & (uint)(CONCAT17((byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar5 >> 0x18),
                                   CONCAT16((byte)((uint)iVar8 >> 0x10) &
                                            (byte)((uint)iVar5 >> 0x10),
                                            CONCAT15((byte)((uint)iVar8 >> 8) &
                                                     (byte)((uint)iVar5 >> 8),
                                                     CONCAT14((byte)iVar8 & (byte)iVar5,uVar4)))) >>
                         0x20) &
          CONCAT13((byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar6 >> 0x18),
                   CONCAT12((byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar6 >> 0x10),
                            CONCAT11((byte)((uint)iVar9 >> 8) & (byte)((uint)iVar6 >> 8),
                                     (byte)iVar9 & (byte)iVar6)))) != 0) {
        local_30 = CONCAT31(local_30._1_3_,(char)param_4) | 8;
        *(undefined1 *)(param_1 + 0x16f0) = 1;
      }
      uStack_2c = param_3;
      if ((param_4 >> 2 & 1) == 0) {
        FUN_030fe6e8(param_1 + 0x16d0,&local_50);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x16e8);
        lVar2 = *(long *)(param_1 + 0x16e0);
        iVar3 = iVar5 + 1;
        if ((int)(*(uint *)(param_1 + 0x16ec) & 0x3fffffff) <= iVar5) {
          lVar2 = FUN_030ff24c(PTR_PTR_0434a080,iVar3);
          iVar5 = *(int *)(param_1 + 0x16e8);
          *(long *)(param_1 + 0x16e0) = lVar2;
        }
        puVar1 = (undefined8 *)(lVar2 + (long)iVar5 * 0x30);
        puVar1[3] = local_38;
        puVar1[5] = local_28;
        puVar1[1] = uStack_48;
        puVar1[2] = uStack_40;
        *puVar1 = local_50;
        puVar1[4] = CONCAT44(uStack_2c,local_30);
        *(int *)(param_1 + 0x16e8) = iVar3;
      }
    }
  }
  return;
}


