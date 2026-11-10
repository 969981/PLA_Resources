/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029651bc; name: FUN_029651bc
 */


void FUN_029651bc(long param_1,byte param_2,undefined2 param_3,uint param_4,uint param_5,
                 undefined1 param_6,undefined8 param_7,uint param_8,ushort param_9)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x14d0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x14d0) = *(undefined8 *)(lVar1 + 0x18);
    plVar3 = (long *)(lVar1 + 0x10);
    lVar2 = *plVar3;
    lVar4 = *(long *)(lVar1 + 0x18);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x18) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar2;
    }
    param_5 = ~param_4 * 0x1000000 + 0x9000000 | param_5;
    *plVar3 = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    uVar5 = 0x1f;
    if ((param_2 < 6) && ((1 << (ulong)(param_2 & 0x1f) & 0x31U) != 0)) {
      uVar5 = param_6;
    }
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *plVar3 = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(uint *)(lVar1 + 0x34) = param_5;
    *(byte *)(lVar1 + 0x30) = param_2;
    *(undefined8 *)(lVar1 + 0x20) = param_7;
    *(undefined1 *)(lVar1 + 0x3a) = param_6;
    *(undefined2 *)(lVar1 + 0x38) = param_3;
    *(undefined1 *)(lVar1 + 0x3b) = uVar5;
    *(uint *)(lVar1 + 0x3c) = (uint)param_9 | (param_8 & 0xff) << 0x10 | 0x20000000;
    lVar2 = *(long *)(param_1 + 0x14c8);
    if (lVar2 == 0) {
      *(long *)(param_1 + 0x14c8) = lVar1;
      return;
    }
    if (*(uint *)(lVar2 + 0x34) < param_5) {
      *(long *)(lVar1 + 0x18) = lVar2;
      *(long *)(lVar2 + 0x10) = lVar1;
      *(long *)(param_1 + 0x14c8) = lVar1;
      return;
    }
    while (lVar4 = *(long *)(lVar2 + 0x18), lVar4 != 0) {
      lVar2 = lVar4;
      if (*(uint *)(lVar4 + 0x34) < param_5) {
        lVar2 = *(long *)(lVar4 + 0x10);
        *(long *)(lVar2 + 0x18) = lVar1;
        *(long *)(lVar1 + 0x10) = lVar2;
        *(long *)(lVar1 + 0x18) = lVar4;
        *(long *)(lVar4 + 0x10) = lVar1;
        return;
      }
    }
    *(long *)(lVar2 + 0x18) = lVar1;
    *(long *)(lVar1 + 0x10) = lVar2;
  }
  return;
}


