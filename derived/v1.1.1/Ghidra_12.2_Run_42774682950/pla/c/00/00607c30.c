/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607c30; name: FUN_00607c30
 */


void FUN_00607c30(undefined8 param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  char *__s;
  int *piVar2;
  ulong uVar3;
  FILE *__stream;
  ulong local_a0 [8];
  char *local_60;
  char *local_38;
  
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_60 = (char *)0x0;
  local_38 = param_4;
                    /* try { // try from 00607c98 to 00607cbb has its CatchHandler @ 00607e54 */
  piVar2 = __errno_location();
  FUN_00607af0(local_a0 + 6,
               "\n\n#\n# Fatal error in: %s, line %d\n# last system error: %u\n# Check failed: %s",
               param_1,param_2,*piVar2,param_3);
  if (*param_4 == '\f') {
    local_38 = param_4 + 1;
    local_a0[4] = 0;
    local_a0[5] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[0] = 0;
    local_a0[1] = 0;
                    /* try { // try from 00607cdc to 00607d43 has its CatchHandler @ 00607dfc */
    uVar3 = FUN_00607760(local_a0 + 9,&local_38,local_a0 + 3);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN_00607760(local_a0 + 9,&local_38,local_a0), (uVar3 & 1) != 0)) {
      uVar3 = (ulong)(local_a0 + 3) | 1;
      if ((local_a0[3] & 1) != 0) {
        uVar3 = local_a0[5];
      }
      uVar1 = (ulong)local_a0 | 1;
      if ((local_a0[0] & 1) != 0) {
        uVar1 = local_a0[2];
      }
      FUN_00607af0(local_a0 + 6," (%s vs. %s)\n# ",uVar3,uVar1);
    }
    if ((local_a0[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a0[2]);
    }
    if ((local_a0[3] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a0[5]);
    }
  }
  else {
                    /* try { // try from 00607d78 to 00607d8b has its CatchHandler @ 00607e54 */
    FUN_002e4094(local_a0 + 6,&DAT_0397baff,3);
  }
  do {
                    /* try { // try from 00607d8c to 00607d9b has its CatchHandler @ 00607e64 */
    uVar3 = FUN_00607760(local_a0 + 9,&local_38,local_a0 + 6);
  } while ((uVar3 & 1) != 0);
  __s = (char *)((ulong)(local_a0 + 6) | 1);
  if ((local_a0[6] & 1) != 0) {
    __s = local_60;
  }
  fflush(*(FILE **)PTR_stdout_04372328);
  __stream = *(FILE **)PTR_stderr_04372330;
  fputs(__s,__stream);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00607de8 to 00607deb has its CatchHandler @ 00607dec */
  abort();
}


