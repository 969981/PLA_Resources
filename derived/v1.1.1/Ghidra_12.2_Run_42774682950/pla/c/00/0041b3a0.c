/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041b3a0; name: FUN_0041b3a0
 */


void FUN_0041b3a0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x4f) + 1;
  *(char *)(param_1 + 0x4f) = (char)uVar1;
  if (((((uVar1 >> 8 != 0) &&
        (uVar1 = *(byte *)(param_1 + 0x4e) + 1, *(char *)(param_1 + 0x4e) = (char)uVar1,
        uVar1 >> 8 != 0)) &&
       (uVar1 = *(byte *)(param_1 + 0x4d) + 1, *(char *)(param_1 + 0x4d) = (char)uVar1,
       uVar1 >> 8 != 0)) &&
      (((uVar1 = *(byte *)(param_1 + 0x4c) + 1, *(char *)(param_1 + 0x4c) = (char)uVar1,
        uVar1 >> 8 != 0 &&
        (uVar1 = *(byte *)(param_1 + 0x4b) + 1, *(char *)(param_1 + 0x4b) = (char)uVar1,
        uVar1 >> 8 != 0)) &&
       ((uVar1 = *(byte *)(param_1 + 0x4a) + 1, *(char *)(param_1 + 0x4a) = (char)uVar1,
        uVar1 >> 8 != 0 &&
        ((uVar1 = *(byte *)(param_1 + 0x49) + 1, *(char *)(param_1 + 0x49) = (char)uVar1,
         uVar1 >> 8 != 0 &&
         (uVar1 = *(byte *)(param_1 + 0x48) + 1, *(char *)(param_1 + 0x48) = (char)uVar1,
         uVar1 >> 8 != 0)))))))) &&
     ((uVar1 = *(byte *)(param_1 + 0x47) + 1, *(char *)(param_1 + 0x47) = (char)uVar1,
      uVar1 >> 8 != 0 &&
      (((((uVar1 = *(byte *)(param_1 + 0x46) + 1, *(char *)(param_1 + 0x46) = (char)uVar1,
          uVar1 >> 8 != 0 &&
          (uVar1 = *(byte *)(param_1 + 0x45) + 1, *(char *)(param_1 + 0x45) = (char)uVar1,
          uVar1 >> 8 != 0)) &&
         (uVar1 = *(byte *)(param_1 + 0x44) + 1, *(char *)(param_1 + 0x44) = (char)uVar1,
         uVar1 >> 8 != 0)) &&
        ((uVar1 = *(byte *)(param_1 + 0x43) + 1, *(char *)(param_1 + 0x43) = (char)uVar1,
         uVar1 >> 8 != 0 &&
         (uVar1 = *(byte *)(param_1 + 0x42) + 1, *(char *)(param_1 + 0x42) = (char)uVar1,
         uVar1 >> 8 != 0)))) &&
       (uVar1 = *(byte *)(param_1 + 0x41) + 1, *(char *)(param_1 + 0x41) = (char)uVar1,
       uVar1 >> 8 != 0)))))) {
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
  }
  return;
}


