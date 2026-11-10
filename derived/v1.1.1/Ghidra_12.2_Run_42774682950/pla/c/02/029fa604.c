/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fa604; name: FUN_029fa604
 */


void FUN_029fa604(long param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort local_80;
  undefined2 local_7e;
  undefined1 local_7c;
  byte local_7b;
  undefined2 local_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined1 uStack_74;
  char cStack_73;
  undefined2 uStack_72;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  undefined4 local_50;
  char local_48 [8];
  
  uVar11 = *(ulong *)(param_2 + 0x130);
  switch((uint)uVar11 & 7) {
  case 1:
  case 2:
  case 3:
    uVar12 = uVar11 >> 0xe;
    break;
  case 4:
    uVar12 = uVar11 >> 0x14;
    break;
  default:
    uVar12 = 0;
  }
  cVar2 = *(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa8) +
                    (uVar12 & 0xff) + (uVar12 & 0xff) * 2 + 2);
  if (cVar2 != '\x1f') {
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_029506a8(param_2,0xe);
    uVar8 = (uint)(uVar6 >> 3) & 0x1fffffff;
    if ((uVar6 & 7) != 0) {
      uVar8 = uVar8 + 1;
    }
    uVar8 = FUN_0293ebd0(uVar10,param_2,uVar8);
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    uVar5 = FUN_029506a8(param_2,0xd);
    bVar3 = *(byte *)(param_2 + 0x7d);
    local_7a = 0;
    uStack_78 = 0x100;
    cStack_73 = 6;
    local_60 = 0;
    local_58 = 0;
    uVar1 = (ushort)uVar5;
    if ((uVar8 & 0xffff) <= (uVar5 & 0xffff)) {
      uVar1 = (ushort)uVar8;
    }
    bVar4 = (byte)((uint)uVar11 >> 3);
    local_7b = bVar4 & 0x1f;
    local_7c = 0x24;
    lVar7 = 0;
    local_50 = 0;
    local_80 = CONCAT11(bVar3,bVar4) & 0xff1f;
    uStack_76 = 0x45;
    uStack_74 = (undefined1)uVar12;
    local_70 = 0;
    local_68 = 0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    if (5 < bVar3) {
      if (bVar3 < 0xc) {
        lVar7 = 2;
      }
      else if (bVar3 < 0x12) {
        lVar7 = 1;
      }
      else if (bVar3 < 0x18) {
        lVar7 = 3;
      }
      else {
        lVar7 = (ulong)(bVar3 < 0x1e) << 2;
      }
    }
    uVar8 = (uint)*(byte *)(lVar9 + lVar7 * 0x38 + 0x38);
    local_7e = uVar1;
    if (uVar8 != 0) {
      uVar5 = 0;
      do {
        if ((uint)*(byte *)(*(long *)(lVar9 + lVar7 * 0x38 + (ulong)(uVar5 & 0xff) * 8 + 8) + 0x7d)
            == (uint)bVar3) {
          cStack_73 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
          if (cStack_73 != '\x06') goto LAB_029fa7bc;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
    cStack_73 = '\x06';
LAB_029fa7bc:
    local_70 = CONCAT44((uint)bVar3,0x8200cb);
    FUN_029e27cc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb60),local_48,&local_80);
    if (local_48[0] != '\0') {
      local_7c = 0;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      cStack_73 = 0;
      uStack_72 = 0;
      local_70 = 0;
      local_58 = local_58 & 0xffffffff00000000;
      local_7e = CONCAT11(bVar3,cVar2);
      local_68 = 0;
      local_60 = 0;
      local_80 = uVar1;
      FUN_029e34cc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xc00),local_48,&local_80);
      local_48[0] = cVar2;
      FUN_029e2b50(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb80),&local_80,local_48);
    }
  }
  return;
}


