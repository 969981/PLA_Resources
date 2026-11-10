/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029669c0; name: FUN_029669c0
 */


void FUN_029669c0(long *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_68;
  byte local_67 [7];
  undefined1 auStack_58 [8];
  
  lVar5 = *(long *)(*(long *)(param_1[6] + 0x70) + 0x30);
  if ((lVar5 != 0) && (iVar3 = *(int *)(lVar5 + 0xc), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if (((iVar7 + 6U & 0xffff) < 0x82) &&
         (lVar5 = *(long *)(*(long *)(param_1[6] + 0x70) + (ulong)(ushort)(iVar7 + 6U) * 8 + 8),
         lVar5 != 0)) {
        uVar6 = *(uint *)(lVar5 + 0xc);
      }
      else {
        uVar6 = 0;
      }
      local_67[0] = 4;
      local_67[1] = 0;
      local_67[2] = 0;
      local_67[3] = 0;
      uVar4 = *(uint *)(*param_1 + 0x110);
      if ((uVar6 & 0xff) < 6) {
        lVar5 = 0;
joined_r0x02966aac:
        if (uVar4 < 3) goto LAB_02966ab0;
LAB_02966a9c:
        local_68 = 2;
      }
      else {
        if ((uVar6 & 0xff) < 0xc) {
          lVar5 = 2;
          goto joined_r0x02966aac;
        }
        if ((uVar6 & 0xff) < 0x12) {
          lVar5 = 1;
        }
        else {
          if (0x17 < (uVar6 & 0xff)) {
            lVar5 = (ulong)((uVar6 & 0xff) < 0x1e) << 2;
            goto joined_r0x02966aac;
          }
          lVar5 = 3;
        }
        if (2 < uVar4) goto LAB_02966a9c;
LAB_02966ab0:
        local_68 = (&PTR_DAT_04276e58)[(int)uVar4][lVar5];
      }
      uVar6 = 1;
      *(undefined1 *)((undefined2 *)((ulong)&local_68 | 2) + 1) = 0;
      *(undefined2 *)((ulong)&local_68 | 2) = 0;
      while( true ) {
        uVar4 = uVar6 - 1;
        if ((((uVar4 & 0xffff) == 0x10) || ((uVar4 & 0xffff) == 10)) &&
           (uVar2 = (uVar4 >> 3) + 1, (uVar2 & 0xff) < 4)) {
          bVar1 = (byte)uVar2;
          local_67[bVar1] = local_67[bVar1] | (byte)(1 << (ulong)(uVar4 & 6));
        }
        if (uVar6 == 0x13) break;
        if ((((uVar6 & 0xffff) == 0xf) || ((uVar6 & 0xffff) == 9)) &&
           (uVar4 = (uVar4 >> 3) + 1, (uVar4 & 0xff) < 4)) {
          bVar1 = (byte)uVar4;
          local_67[bVar1] = local_67[bVar1] | (byte)(1 << (ulong)(uVar6 & 7));
        }
        uVar6 = uVar6 + 2;
      }
      local_67[4] = param_2 & 1;
      FUN_029f5bfc(*(undefined8 *)(param_1[4] + 0x1160),auStack_58,&local_68);
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar3);
  }
  return;
}


