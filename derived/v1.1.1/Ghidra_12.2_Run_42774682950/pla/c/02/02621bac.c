/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02621bac; name: FUN_02621bac
 */


/* WARNING: Removing unreachable block (ram,0x02621d6c) */

void FUN_02621bac(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auStack_1c0 [391];
  undefined1 local_39;
  long local_38;
  
  local_39 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  local_38 = param_2;
  FUN_02625674(param_1);
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_026255c4(param_1 + 2);
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_026256a4(param_1 + 4);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_026256d4(param_1 + 6);
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_026255e8(param_1 + 8);
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_026256f8(param_1 + 10);
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_0262571c(param_1 + 0xc);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_02625740(param_1 + 0xe);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_02625764(param_1 + 0x10);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_02625788(param_1 + 0x12);
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  FUN_026257b8(param_1 + 0x14);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  FUN_026257e8(param_1 + 0x16);
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  FUN_02625818(param_1 + 0x18);
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  FUN_02625848(param_1 + 0x1a);
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  FUN_02625878(param_1 + 0x1c);
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  FUN_026258a8(param_1 + 0x1e);
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  FUN_02625618(param_1 + 0x20);
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  FUN_026258d8(param_1 + 0x23);
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  FUN_02625908(param_1 + 0x25);
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  FUN_02625938(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x29) = 0;
  FUN_02621770((long)param_1 + 0x14c);
  uVar1 = FUN_02626800(param_2 + 0x1f0);
  if ((uVar1 & 1) != 0) {
    FUN_0262682c(param_2 + 0x1f0);
    FUN_02626844(auStack_1c0);
    FUN_01b0138c(param_1,auStack_1c0);
    FUN_01aebac0(auStack_1c0);
  }
  return;
}


