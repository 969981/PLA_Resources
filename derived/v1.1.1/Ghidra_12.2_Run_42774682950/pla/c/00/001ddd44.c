/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ddd44; name: FUN_001ddd44
 */


void FUN_001ddd44(long *param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int *piVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  undefined4 local_34;
  
  if (*(int *)((long)param_1 + 0xbc) == 2) {
    return;
  }
  lVar7 = *param_1;
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x8000002) == 0) {
    local_34 = 0x100;
    iVar1 = nnsocketGetPeerName(param_2,auStack_140,&local_34);
    if (iVar1 == 0) {
      local_34 = 0x100;
      memset(auStack_240,0,0x100);
      iVar1 = nnsocketGetSockName(param_2,auStack_240,&local_34);
      if (iVar1 == 0) {
        uVar8 = FUN_001ddf3c(auStack_140,(void *)((long)param_1 + 0x1a2),param_1 + 0x3a);
        if ((uVar8 & 1) == 0) {
          puVar4 = (uint *)__errno_location();
          uVar8 = (ulong)*puVar4;
          piVar5 = __errno_location();
          uVar3 = FUN_001f8d80(*piVar5,auStack_2c0,0x80);
          pcVar6 = "ssrem inet_ntop() failed with errno %d: %s";
        }
        else {
          memcpy(param_1 + 0x11,(void *)((long)param_1 + 0x1a2),0x2e);
          uVar8 = FUN_001ddf3c(auStack_240,param_1 + 0x3b,param_1 + 0x41);
          if ((uVar8 & 1) != 0) {
            lVar7 = *param_1;
            goto LAB_001ddd84;
          }
          puVar4 = (uint *)__errno_location();
          uVar8 = (ulong)*puVar4;
          piVar5 = __errno_location();
          uVar3 = FUN_001f8d80(*piVar5,auStack_2c0,0x80);
          pcVar6 = "ssloc inet_ntop() failed with errno %d: %s";
        }
      }
      else {
        uVar2 = nnsocketGetLastErrno();
        uVar8 = uVar2 & 0xffffffff;
        uVar3 = FUN_001f8d80(uVar2,auStack_2c0,0x80);
        pcVar6 = "getsockname() failed with errno %d: %s";
      }
    }
    else {
      uVar2 = nnsocketGetLastErrno();
      uVar8 = uVar2 & 0xffffffff;
      uVar3 = FUN_001f8d80(uVar2,auStack_2c0,0x80);
      pcVar6 = "getpeername() failed with errno %d: %s";
    }
    FUN_001f3ae0(lVar7,pcVar6,uVar8,uVar3);
  }
  else {
LAB_001ddd84:
    memcpy((void *)(lVar7 + 0x1648),(void *)((long)param_1 + 0x1a2),0x2e);
    memcpy((void *)(*param_1 + 0x1680),param_1 + 0x3b,0x2e);
    *(undefined8 *)(*param_1 + 0x16b8) = *(undefined8 *)param_1[0x84];
    *(undefined4 *)(*param_1 + 0x16c0) = *(undefined4 *)(param_1[0x84] + 0x80);
    *(long *)(*param_1 + 0x1678) = param_1[0x3a];
    *(long *)(*param_1 + 0x16b0) = param_1[0x41];
  }
  return;
}


