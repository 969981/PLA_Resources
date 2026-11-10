/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eb3e0; name: FUN_029eb3e0
 */


void FUN_029eb3e0(long param_1,undefined1 *param_2,byte *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 local_48 [8];
  undefined2 local_38;
  byte local_36;
  
  local_38 = *(undefined2 *)param_3;
  local_36 = param_3[2];
  FUN_029eb6b4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1420),local_48,&local_38);
  *param_2 = local_48[0];
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x7b,*param_3,param_3[1],param_3[2]
               ,param_3[3]);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *param_2;
  lVar6 = *(long *)(param_1 + 0x20);
  uVar3 = FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar4);
  if (((uVar3 & 1) == 0) &&
     (uVar2 = FUN_02957720(*(undefined8 *)(lVar4 + 0x188),0xe,uVar1,0,0), -1 < (int)uVar2)) {
    uVar2 = uVar2 & 0xff;
    if (uVar2 < 10) {
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 0x188) + (ulong)uVar2 + 0x10) = 1;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x6d,(ulong)uVar2,0xe);
  }
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1a8) + 8) != '\0') {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    if ((param_3[1] < *(byte *)(lVar4 + (ulong)*param_3 * 0x38 + 0x38)) &&
       (lVar4 = *(long *)(lVar4 + (ulong)*param_3 * 0x38 + (ulong)param_3[1] * 8 + 8), lVar4 != 0))
    {
      lVar6 = *(long *)(param_1 + 0x20);
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 8) +
                        (ulong)*(byte *)(lVar4 + 0x7d) * 8 + 0x120);
      *(byte *)(lVar5 + 0x386) = *(byte *)(lVar5 + 0x386) | 4;
      FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x20,*(undefined1 *)(lVar4 + 0x7d),0x12);
      return;
    }
  }
  return;
}


