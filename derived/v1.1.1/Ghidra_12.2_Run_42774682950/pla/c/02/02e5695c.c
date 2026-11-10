/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5695c; name: FUN_02e5695c
 */


void FUN_02e5695c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar1 = (uint)param_2;
  *(uint *)(param_1 + 0xec) =
       (((((((*(int *)(param_1 + 0xec) * 0x1000193 ^ uVar1 & 0xff) * 0x1000193 ^ uVar1 >> 8 & 0xff)
            * 0x1000193 ^ uVar1 >> 0x10 & 0xff) * 0x1000193 ^ uVar1 >> 0x18) * 0x1000193 ^
         uVar2 & 0xff) * 0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^ uVar2 >> 0x10 & 0xff) *
       0x1000193 ^ uVar2 >> 0x18;
  return;
}


