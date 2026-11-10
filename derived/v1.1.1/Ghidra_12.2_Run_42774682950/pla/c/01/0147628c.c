/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147628c; name: FUN_0147628c
 */


void FUN_0147628c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x5c8) != '\0') {
    uVar4 = nn::os::GetSystemTick();
    *(undefined8 *)(param_1 + 0x5c0) = uVar4;
    *(undefined1 *)(param_1 + 0x5c8) = 0;
  }
  lVar2 = nn::os::GetSystemTick();
  uVar3 = nn::os::ConvertToTimeSpan(lVar2 - *(long *)(param_1 + 0x5c0));
  if (((undefined1 *)*param_2 != &DAT_cbf29ce484222645) &&
     (((undefined1 *)*param_2 != *(undefined1 **)(param_1 + 0x5b8) ||
      (uVar1 = ((long)uVar3 >> 0x20) * 0x26d694b3 + ((uVar3 & 0xffffffff) * 0x26d694b3 >> 0x20),
      (long)(ulong)*(uint *)(param_1 + 0x5cc) <=
      ((long)(((long)uVar3 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
             ((uVar3 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a) -
      ((long)uVar3 >> 0x3f))))) {
    uVar4 = nn::os::GetSystemTick();
    *(undefined8 *)(param_1 + 0x5c0) = uVar4;
    if ((*(byte *)(param_1 + 0x5b0) & 0xf) != 0) {
      FUN_00d73864(param_1);
      *(ulong *)(param_1 + 0x5b0) = *(ulong *)(param_1 + 0x5b0) & 0xfffffffffffffff0;
      FUN_00d42690(param_1,0,1);
    }
    *(undefined8 *)(param_1 + 0x5b8) = *param_2;
    FUN_01476418(param_1,param_2);
    if ((*(long *)(param_1 + 0x2c8) != 0) &&
       (uVar3 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043acdd8), (uVar3 & 1) == 0)) {
      FUN_00d73864(param_1);
    }
    FUN_00d42690(param_1,1,1);
    *(ulong *)(param_1 + 0x5b0) = *(ulong *)(param_1 + 0x5b0) | 3;
    local_40 = 0x994cd76cf26dfc40;
    pcStack_38 = "anime_wake";
    local_30 = 10;
    uStack_28 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    }
  }
  return;
}


