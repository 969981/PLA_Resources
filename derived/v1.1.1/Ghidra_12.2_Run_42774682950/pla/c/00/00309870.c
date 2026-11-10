/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00309870; name: FUN_00309870
 */


/* WARNING: Removing unreachable block (ram,0x003098ec) */
/* WARNING: Removing unreachable block (ram,0x0030997c) */

undefined8
FUN_00309870(long param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int *param_5)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  ulong unaff_x20;
  ulong unaff_x22;
  undefined1 auStack_48 [8];
  
  cVar6 = *(char *)(param_1 + 1);
  if (cVar6 == '\x1c') {
    FUN_002ef9f0(&DAT_04399938,&LAB_003097b0,param_2,param_3);
    if (DAT_0439992c == '\x01') {
      iVar2 = nnsocketSocket(0x1c,param_2,param_3);
      *param_5 = iVar2;
    }
    else {
      *param_5 = -1;
      piVar3 = __errno_location();
      *piVar3 = 0x61;
      iVar2 = *param_5;
    }
    if ((-1 < iVar2) && (iVar2 = FUN_00309b70(), iVar2 != 0)) {
      *param_4 = 3;
      return 0;
    }
    iVar2 = FUN_00308390(param_1,0);
    if (iVar2 == 0) {
      *param_4 = 2;
      iVar2 = *param_5;
      goto LAB_003099a4;
    }
    if (-1 < *param_5) {
      nnsocketClose();
    }
    cVar6 = '\x02';
  }
  *param_4 = (uint)(cVar6 == '\x02');
  iVar2 = nnsocketSocket(cVar6,param_2,param_3);
  *param_5 = iVar2;
LAB_003099a4:
  if (-1 < iVar2) {
    return 0;
  }
  FUN_003086d0(auStack_48 + 0x20,param_1,0);
                    /* try { // try from 00309a20 to 00309a3f has its CatchHandler @ 00309acc */
  piVar3 = __errno_location();
  lVar4 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                       ,0x1bb,*piVar3,"socket");
  if (lVar4 == 0) {
                    /* try { // try from 00309aa4 to 00309acb has its CatchHandler @ 00309acc */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                 "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = (ulong)(auStack_48 + 0x20) | 1;
  if ((unaff_x22 & 1) != 0) {
    uVar1 = unaff_x20;
  }
                    /* try { // try from 00309a60 to 00309a77 has its CatchHandler @ 00309adc */
  FUN_002f2ff0(auStack_48,uVar1);
  uVar5 = FUN_002f1340(lVar4,4,auStack_48);
  if ((unaff_x22 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,unaff_x20);
  }
  return uVar5;
}


