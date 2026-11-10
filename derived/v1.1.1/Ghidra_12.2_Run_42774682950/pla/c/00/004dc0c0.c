/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc0c0; name: FUN_004dc0c0
 */


undefined8 FUN_004dc0c0(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort local_4 [2];
  
  lVar1 = (param_2 & 0xffff) * 0xc;
  if (((uint)param_2 - 1 & 0xffff) < 0x1e) {
    local_4[0] = (ushort)(param_2 >> 8) & 0xff | (ushort)(((uint)param_2 & 0xff00ff) << 8);
    uVar2 = FUN_004e2fc0(param_1,param_3,
                         *(undefined4 *)(&switchD_004dcc3c::switchdataD_03a27f58 + lVar1),
                         *(undefined4 *)(&DAT_03a27f54 + lVar1),local_4);
    return uVar2;
  }
  return 0;
}


