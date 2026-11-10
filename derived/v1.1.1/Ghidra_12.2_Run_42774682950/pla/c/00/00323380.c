/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00323380; name: FUN_00323380
 */


bool FUN_00323380(void *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  local_40 = 0;
  local_38 = (void *)0x0;
  local_48 = 0;
  if (param_1 == (void *)0x0) {
    uVar3 = 0;
    goto LAB_00323424;
  }
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_2 < 0x17) {
    local_48 = (ulong)(byte)((int)param_2 << 1);
    pvVar4 = (void *)((ulong)&local_48 | 1);
    if (param_2 != 0) goto LAB_00323408;
  }
  else {
    uVar3 = param_2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_48 = uVar3 | 1;
    local_40 = param_2;
    local_38 = pvVar4;
LAB_00323408:
    memcpy(pvVar4,param_1,param_2);
  }
  *(undefined1 *)((long)pvVar4 + param_2) = 0;
  uVar3 = local_48 & 0xff;
LAB_00323424:
  uVar2 = (undefined4)(uVar3 >> 1);
  pvVar4 = (void *)((ulong)&local_48 | 1);
  if ((uVar3 & 1) != 0) {
    uVar2 = (undefined4)local_40;
    pvVar4 = local_38;
  }
                    /* try { // try from 0032343c to 0032343f has its CatchHandler @ 0032349c */
  uVar3 = FUN_0033bb20(pvVar4,uVar2);
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    FUN_0033b460(param_3,"parsing",0);
  }
  return !bVar1;
}


