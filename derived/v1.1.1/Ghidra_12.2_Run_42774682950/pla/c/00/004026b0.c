/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004026b0; name: FUN_004026b0
 */


/* WARNING: Removing unreachable block (ram,0x00402724) */
/* WARNING: Removing unreachable block (ram,0x0040272c) */
/* WARNING: Removing unreachable block (ram,0x004030cc) */

undefined8
FUN_004026b0(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
            char *param_6)

{
  undefined8 uVar1;
  long local_68;
  
  local_68 = 0;
  if (*param_6 == '\0') {
    if (param_2 != 0) goto LAB_004030d0;
  }
  else if ((param_2 != 0) || (*param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00402760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((ulong)switchD_00402760::switchdataD_039fecb6 * 4 + 0x402764))();
    return uVar1;
  }
  *param_5 = 0;
LAB_004030d0:
  uVar1 = FUN_004031d0(param_1,param_2,&local_68,param_3,0);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *param_4 = local_68 + -1;
  }
  return uVar1;
}


