/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001de628; name: FUN_001de628
 */


int FUN_001de628(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  size_t sVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  char *__s;
  int iVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_448 [12];
  undefined1 auStack_43c [48];
  undefined4 local_40c;
  int local_408;
  int local_404;
  undefined4 local_3fc;
  undefined1 auStack_3f8 [260];
  undefined1 auStack_2f4 [128];
  undefined4 local_274;
  undefined1 auStack_270 [256];
  long *local_170;
  undefined4 local_168;
  
  lVar13 = *param_1;
  *param_3 = 0xffffffff;
  iVar5 = FUN_001ded10(param_1,param_2,&local_408,&local_40c);
  if (iVar5 != 0) {
    return 0;
  }
  uVar8 = FUN_001ddf3c(auStack_3f8,auStack_43c,auStack_448);
  if ((uVar8 & 1) == 0) {
    piVar9 = __errno_location();
    iVar5 = *piVar9;
    piVar9 = __errno_location();
    uVar11 = FUN_001f8d80(*piVar9,&local_168,0x80);
    FUN_001f3ae0(lVar13,"sa_addr inet_ntop() failed with errno %d: %s",iVar5,uVar11);
    FUN_001de484(param_1,local_40c);
    return 0;
  }
  FUN_001f3934(lVar13,"  Trying %s...\n",auStack_43c);
  if ((local_408 == 2) && (local_404 == 1)) {
    FUN_001deeb8(param_1,local_40c);
    if ((*(ulong *)(lVar13 + 0xf40) >> 0x2c & 1) != 0) {
      local_168 = (uint)(*(ulong *)(lVar13 + 0xf40) >> 0x2c) & 1;
      iVar5 = nnsocketSetSockOpt(local_40c,0xffff,8,&local_168,4);
      if (iVar5 < 0) {
        FUN_001f3934(lVar13,"Failed to set SO_KEEPALIVE on fd %d\n",local_40c);
      }
    }
  }
  else {
    FUN_001deeb8(param_1,local_40c);
  }
  if (*(long *)(lVar13 + 0x748) == 0) {
LAB_001de7d8:
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_001e95f0(lVar13,1);
    iVar5 = (**(code **)(lVar13 + 0x748))(*(undefined8 *)(lVar13 + 0x750),local_40c,0);
    FUN_001e95f0(lVar13,0);
    if (iVar5 == 0) goto LAB_001de7d8;
    if (iVar5 != 2) {
      FUN_001de484(param_1,local_40c);
      return 0x2a;
    }
  }
  if (local_408 != 2) goto LAB_001de998;
  uVar6 = FUN_001e3520(auStack_3f8);
  lVar14 = *param_1;
  local_170 = (long *)0x0;
  uVar1 = *(ushort *)(lVar14 + 0x700);
  uVar15 = (uint)uVar1;
  iVar5 = *(int *)(lVar14 + 0x704);
  __s = *(char **)(lVar14 + 0xcc0);
  if ((uVar1 == 0) && (__s == (char *)0x0)) goto LAB_001de998;
  memset(&local_168,0,0x100);
  if ((__s == (char *)0x0) || (sVar10 = strlen(__s), 0xfe < sVar10)) {
    local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
LAB_001de890:
    uVar4 = nnsocketInetHtons(uVar1);
    uVar11 = 0x10;
    local_168 = CONCAT22(uVar4,(undefined2)local_168);
LAB_001de8a0:
    iVar7 = nnsocketBind(local_40c,&local_168,uVar11);
    while (iVar7 < 0) {
      iVar5 = iVar5 + -1;
      if (iVar5 < 1) {
        uVar8 = nnsocketGetLastErrno();
        *(int *)(lVar14 + 0x11c0) = (int)uVar8;
        uVar11 = FUN_001f8d80(uVar8,auStack_270,0x80);
        FUN_001f3ae0(lVar14,"bind failed with errno %d: %s",uVar8 & 0xffffffff,uVar11);
        goto LAB_001debe4;
      }
      FUN_001f3934(lVar14,"Bind to local port %hu failed, trying next\n",uVar15 & 0xffff);
      uVar15 = uVar15 + 1;
      if (local_168._1_1_ == '\x02') {
        uVar4 = nnsocketInetNtohs(uVar15);
        local_168 = CONCAT22(uVar4,(undefined2)local_168);
      }
      iVar7 = nnsocketBind(local_40c,&local_168,uVar11);
    }
    local_274 = 0x100;
    memset(auStack_270,0,0x100);
    iVar5 = nnsocketGetSockName(local_40c,auStack_270,&local_274);
    if (iVar5 < 0) {
      uVar8 = nnsocketGetLastErrno();
      *(int *)(lVar14 + 0x11c0) = (int)uVar8;
      uVar11 = FUN_001f8d80(uVar8,auStack_2f4,0x80);
      FUN_001f3ae0(lVar14,"getsockname() failed with errno %d: %s",uVar8 & 0xffffffff,uVar11);
      iVar16 = 0x2d;
    }
    else {
      FUN_001f3934(lVar14,"Local port: %hu\n",uVar15 & 0xffff);
      iVar16 = 0;
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x1000000;
    }
    if (iVar16 == 0) {
LAB_001de998:
      FUN_001f1bf4(local_40c,1);
      auVar18 = FUN_001f8fb4();
      *(undefined1 (*) [16])(param_1 + 0x80) = auVar18;
      if (1 < (int)param_1[0x82]) {
        FUN_001e6b54(lVar13,param_1[0x83],3);
      }
      if ((((bVar2) || (*(int *)((long)param_1 + 0xbc) != 1)) ||
          (((*(byte *)((long)param_1 + 0x3ff) >> 3 & 1) == 0 &&
           (iVar5 = nnsocketConnect(local_40c,auStack_3f8,local_3fc), iVar5 != -1)))) ||
         ((iVar5 = nnsocketGetLastErrno(), iVar5 == 0xb || (iVar5 == 0x73)))) {
        *param_3 = local_40c;
        return 0;
      }
      uVar11 = FUN_001f8d80(iVar5,&local_168,0x80);
      FUN_001f3934(lVar13,"Immediate connect fail for %s: %s\n",auStack_43c,uVar11);
      *(int *)(lVar13 + 0x11c0) = iVar5;
      FUN_001de484(param_1,local_40c);
      return 7;
    }
    goto LAB_001debe8;
  }
  memset(auStack_270,0,0x100);
  iVar7 = strncmp("if!",__s,3);
  if (iVar7 != 0) {
    iVar7 = strncmp("host!",__s,5);
    if (iVar7 != 0) {
      bVar3 = false;
      goto LAB_001deaa0;
    }
    __s = __s + 5;
    goto LAB_001deb18;
  }
  __s = __s + 3;
  bVar3 = true;
LAB_001deaa0:
  iVar7 = FUN_001e3528(2,uVar6,(int)param_1[0x17],__s,auStack_270,0x100);
  if (iVar7 == 2) {
    FUN_001f3934(lVar14,"Local Interface %s is ip %s using address family %i\n",__s,auStack_270,2);
LAB_001deb9c:
    iVar7 = FUN_001e35d0(2,auStack_270,(ulong)&local_168 | 4);
    if (0 < iVar7) {
      local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
      goto LAB_001de890;
    }
    uVar11 = 0;
    goto LAB_001de8a0;
  }
  iVar16 = 1;
  if (iVar7 == 1) goto LAB_001debe8;
  if (iVar7 == 0) {
    if (!bVar3) {
LAB_001deb18:
      lVar17 = param_1[0x86];
      param_1[0x86] = 1;
      iVar7 = FUN_001e1608(param_1,__s,0,&local_170);
      if (iVar7 == 1) {
        FUN_001df9c4(param_1,&local_170);
      }
      param_1[0x86] = lVar17;
      if (local_170 != (long *)0x0) {
        FUN_001e1190(*local_170,auStack_270,0x100);
        FUN_001f3934(lVar14,"Name \'%s\' family %i resolved to \'%s\' family %i\n",__s,2,auStack_270
                     ,*(undefined4 *)(*local_170 + 4));
        FUN_001e181c(lVar14,local_170);
        goto LAB_001deb9c;
      }
      goto LAB_001debc4;
    }
    pcVar12 = "Couldn\'t bind to interface \'%s\'";
  }
  else {
    if (!bVar3) goto LAB_001deb18;
LAB_001debc4:
    pcVar12 = "Couldn\'t bind to \'%s\'";
    *(ushort *)(lVar14 + 0x15a4) = *(ushort *)(lVar14 + 0x15a4) & 0xfff7;
  }
  FUN_001f3ae0(lVar14,pcVar12,__s);
LAB_001debe4:
  iVar16 = 0x2d;
LAB_001debe8:
  FUN_001de484(param_1,local_40c);
  iVar5 = 7;
  if (iVar16 != 1) {
    iVar5 = iVar16;
  }
  return iVar5;
}


