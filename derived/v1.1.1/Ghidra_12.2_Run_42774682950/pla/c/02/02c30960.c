/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c30960; name: FUN_02c30960
 */


ulong FUN_02c30960(long param_1,ulong param_2,ushort *param_3,ulong param_4)

{
  size_t __n;
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_44;
  byte local_43;
  byte local_42;
  undefined1 local_41;
  
  uVar3 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar4 = 0;
    uVar1 = 0;
    do {
      for (; uVar2 = *param_3, uVar2 == 0x10; param_3 = param_3 + (ulong)param_3[1] + 2) {
      }
      if (uVar2 == 0) {
LAB_02c30a64:
        uVar3 = uVar1;
        break;
      }
      __n = 2;
      if (0x7ff < uVar2) {
        __n = 3;
      }
      if (uVar2 < 0x80) {
        __n = 1;
      }
      if (__n == 3) {
        local_43 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        local_42 = (byte)uVar2 & 0x3f | 0x80;
        uVar2 = uVar2 >> 0xc | 0xffe0;
LAB_02c30a24:
        local_44 = (undefined1)uVar2;
        local_41 = 0;
      }
      else {
        if (__n == 2) {
          local_43 = (byte)uVar2 & 0x3f | 0x80;
          local_42 = 0;
          uVar2 = uVar2 >> 6 | 0xffc0;
          goto LAB_02c30a24;
        }
        if (__n == 1) {
          local_43 = 0;
          local_42 = 0;
          goto LAB_02c30a24;
        }
      }
      uVar3 = __n + uVar1;
      if (param_2 <= uVar3) goto LAB_02c30a64;
      memcpy((void *)(param_1 + uVar1),&local_44,__n);
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 1;
      uVar1 = uVar3;
    } while (uVar4 < param_4);
    *(undefined1 *)(param_1 + uVar3) = 0;
  }
  return uVar3;
}


