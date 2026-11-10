/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ebce4; name: FUN_029ebce4
 */


void FUN_029ebce4(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long local_40;
  undefined1 auStack_38 [8];
  
  bVar2 = *(byte *)(*param_3 + 0x7d);
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  uVar3 = 3;
  if (0x17 < bVar2) {
    uVar3 = (uint)(bVar2 < 0x1e) << 2;
  }
  uVar1 = 1;
  if (0x11 < bVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 2;
  if (0xb < bVar2) {
    uVar3 = uVar1;
  }
  uVar1 = 0;
  if (5 < (ulong)bVar2) {
    uVar1 = uVar3;
  }
  uVar3 = (uint)*(byte *)(lVar5 + (ulong)uVar1 * 0x38 + 0x38);
  if (uVar3 != 0) {
    lVar7 = param_3[1];
    uVar4 = 0;
    do {
      if (*(byte *)(*(long *)(lVar5 + (ulong)uVar1 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d)
          == bVar2) {
        uVar3 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if ((uVar3 & 0xff) != 6) {
          FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x7a,uVar3,(short)lVar7);
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  uVar6 = (ulong)*(byte *)(lVar5 + 0xd88);
  if (uVar6 == 0) {
LAB_029ebe74:
    FUN_02979a0c(*(undefined8 *)(param_1 + 0x38),*param_3);
    local_40 = *param_3;
    FUN_029d8ef4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x500),auStack_38,&local_40);
    lVar5 = *(long *)(param_1 + 0x20);
    lVar7 = *(long *)(lVar5 + 0x20);
    FUN_02952464(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x10) + 8) + (ulong)bVar2 * 8 + 0x120))
    ;
    FUN_029537f8(*(undefined8 *)(*(long *)(lVar7 + 0x10) + 0xa8),bVar2);
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x27,bVar2);
    return;
  }
  plVar8 = (long *)(lVar5 + 8);
  lVar7 = *plVar8;
  if (lVar7 != 0) goto LAB_029ebde8;
  do {
    do {
      uVar6 = uVar6 - 1;
      plVar8 = plVar8 + 0xc;
      if (uVar6 == 0) goto LAB_029ebe74;
      lVar7 = *plVar8;
    } while (lVar7 == 0);
LAB_029ebde8:
  } while (*(byte *)(lVar7 + 0x7d) != bVar2);
  do {
    *(undefined1 *)((long)plVar8 + 0x5d) = 1;
    uVar9 = (ulong)*(byte *)(lVar5 + 0xd88);
    uVar6 = 0;
    lVar7 = (long)plVar8 + (0x58 - lVar5);
    do {
      if (uVar9 == uVar6) {
        uVar6 = uVar9;
        break;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + -0x60;
    } while (lVar7 != 0);
    if ((uint)*(byte *)(lVar5 + 0xd88) <= ((uint)uVar6 & 0xff)) goto LAB_029ebe74;
    uVar6 = (ulong)((uint)uVar6 & 0xff);
    lVar7 = uVar9 - uVar6;
    plVar8 = (long *)(lVar5 + 8 + uVar6 * 0x60);
    lVar10 = *plVar8;
    if (lVar10 != 0) goto LAB_029ebe64;
    do {
      do {
        lVar7 = lVar7 + -1;
        plVar8 = plVar8 + 0xc;
        if (lVar7 == 0) goto LAB_029ebe74;
        lVar10 = *plVar8;
      } while (lVar10 == 0);
LAB_029ebe64:
    } while (*(byte *)(lVar10 + 0x7d) != bVar2);
  } while( true );
}


