/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004945a0; name: FUN_004945a0
 */


int FUN_004945a0(undefined8 param_1,undefined8 param_2)

{
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  FUN_004943a0(&local_50,param_1,param_2);
  FUN_00493ce0(&local_50);
  uStack_14 = uStack_14 |
              local_18 |
              uStack_1c |
              local_20 |
              uStack_24 |
              local_28 |
              uStack_2c |
              local_30 |
              uStack_34 |
              local_38 | uStack_3c | local_40 | uStack_44 | local_48 | uStack_4c | local_50;
  return (int)(uStack_14 - 1 & (uStack_14 ^ 0xffffffff)) >> 0x1f;
}


