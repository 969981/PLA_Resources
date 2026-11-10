/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e62cf4; name: FUN_02e62cf4
 */


uint FUN_02e62cf4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_02e61160();
  uVar3 = (uint)param_2;
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  return (((((((iVar2 * 0x1000193 ^ uVar3 & 0xff) * 0x1000193 ^ uVar3 >> 8 & 0xff) * 0x1000193 ^
             uVar3 >> 0x10 & 0xff) * 0x1000193 ^ uVar3 >> 0x18) * 0x1000193 ^ uVar1 & 0xff) *
           0x1000193 ^ uVar1 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)param_2 >> 0x30) & 0xff) *
         0x1000193 ^ (uint)(byte)((ulong)param_2 >> 0x38);
}


