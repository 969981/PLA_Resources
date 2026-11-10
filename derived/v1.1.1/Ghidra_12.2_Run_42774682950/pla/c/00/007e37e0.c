/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e37e0; name: FUN_007e37e0
 */


void FUN_007e37e0(long param_1,long *param_2)

{
  int iVar1;
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_03a7160c,0x10);
    if (iVar1 == 0) {
      FUN_007ecea8(param_2,"IN_ANY_ADDR:%d",*(undefined2 *)(param_1 + 0x18));
      return;
    }
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_03a7160c,0x10);
    if ((iVar1 == 0) || (iVar1 = memcmp((void *)(param_1 + 0xc),&DAT_03a7160c,0xc), iVar1 == 0)) {
      FUN_007ecea8(param_2,"%d.%d.%d.%d:%d",*(undefined1 *)(param_1 + 0xb),
                   *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 9),
                   *(undefined1 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x18));
      return;
    }
    FUN_007ecea8(param_2,"[%04X:%04X:%04X:%04X:%04X:%04X:%04X:%04X]:%d",
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


