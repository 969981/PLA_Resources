/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f11c8; name: FUN_007f11c8
 */


void FUN_007f11c8(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong local_28;
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar2 = memcmp((void *)(param_1 + 8),&DAT_03a72091,0x10);
    if (iVar2 == 0) {
      FUN_007ecea8(param_2,"IN_ANY_ADDR:%d",*(undefined2 *)(param_1 + 0x18));
      return;
    }
    iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_03a72091,0xc);
    if (iVar2 == 0) {
      FUN_007ecea8(param_2,"%d.%d.%d.%d:%d",*(undefined1 *)(param_1 + 8),
                   *(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10),
                   *(undefined1 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0x18));
      return;
    }
    iVar2 = memcmp((void *)(param_1 + 8),&DAT_03a720a1,8);
    if (iVar2 == 0) {
      memcpy(&local_28,(void *)(param_1 + 0x10),8);
      uVar1 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      FUN_007ecea8(param_2,"0x%016llX:%d",uVar1 >> 0x20 | uVar1 << 0x20,
                   *(undefined2 *)(param_1 + 0x18));
      return;
    }
    FUN_007ecea8(param_2,"%04X:%04X:%04X:%04X:%04X:%04X:%04X:%04X:%d",
                 CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)),
                 CONCAT11(*(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb)),
                 CONCAT11(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd)),
                 CONCAT11(*(undefined1 *)(param_1 + 0xe),*(undefined1 *)(param_1 + 0xf)),
                 CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)),
                 CONCAT11(*(undefined1 *)(param_1 + 0x12),*(undefined1 *)(param_1 + 0x13)),
                 CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)),
                 CONCAT11(*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17)),
                 *(undefined2 *)(param_1 + 0x18));
  }
  return;
}


