/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f9120; name: FUN_001f9120
 */


int FUN_001f9120(long *param_1,ulong param_2,ulong *param_3)

{
  size_t __n;
  undefined *__src;
  int iVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  char *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong __n_00;
  code *pcVar8;
  ulong uVar9;
  bool bVar10;
  undefined7 local_70;
  undefined4 uStack_69;
  undefined8 local_58;
  
  local_58 = 0;
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x15a0) == 1) {
    FUN_001f3934(lVar6,"Moving trailers state machine from initialized to sending.\n");
    *(undefined4 *)(lVar6 + 0x15a0) = 2;
    lVar2 = FUN_001ec820();
    *(long *)(lVar6 + 0x1598) = lVar2;
    if (lVar2 == 0) {
      FUN_001f3ae0(lVar6,"Unable to allocate trailing headers buffer !");
      return 0x1b;
    }
    *(undefined8 *)(lVar6 + 0x1590) = 0;
    FUN_001e95f0(lVar6,1);
    iVar1 = (**(code **)(lVar6 + 0xf38))(&local_58,*(undefined8 *)(lVar6 + 0xf30));
    FUN_001e95f0(lVar6,0);
    if (iVar1 != 0) {
      FUN_001f3ae0(lVar6,"operation aborted by trailing headers callback");
      *param_3 = 0;
      iVar1 = 0x2a;
LAB_001f9200:
      FUN_001ec82c(lVar6 + 0x1598);
      FUN_001f86a8(local_58);
      return iVar1;
    }
    iVar1 = FUN_001ecdac(local_58,*(undefined8 *)(lVar6 + 0x1598),lVar6);
    if (iVar1 != 0) goto LAB_001f9200;
    FUN_001f3934(lVar6,"Successfully compiled trailers.\r\n");
    FUN_001f86a8(local_58);
  }
  if (((*(byte *)(lVar6 + 0x660) >> 6 & 1) == 0) || (*(int *)(lVar6 + 0x15a0) != 0)) {
    if (*(int *)(lVar6 + 0x15a0) != 2) goto LAB_001f926c;
    pcVar8 = FUN_001f94f0;
    lVar2 = lVar6;
  }
  else {
    param_2 = param_2 - 0xc;
    *(long *)(lVar6 + 0x1e0) = *(long *)(lVar6 + 0x1e0) + 10;
LAB_001f926c:
    pcVar8 = *(code **)(lVar6 + 0x1528);
    lVar2 = *(long *)(lVar6 + 0x1530);
  }
  FUN_001e95f0(lVar6,1);
  uVar3 = (*pcVar8)(*(undefined8 *)(lVar6 + 0x1e0),1,param_2,lVar2);
  FUN_001e95f0(lVar6,0);
  if (uVar3 == 0x10000001) {
    if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) {
      *(uint *)(lVar6 + 0x1c0) = *(uint *)(lVar6 + 0x1c0) | 0x20;
      if ((*(byte *)(lVar6 + 0x660) >> 6 & 1) != 0) {
        *(long *)(lVar6 + 0x1e0) = *(long *)(lVar6 + 0x1e0) + -10;
      }
      *param_3 = 0;
      return 0;
    }
    pcVar4 = "Read callback asked for PAUSE when not supported!";
LAB_001f9334:
    FUN_001f3ae0(lVar6,pcVar4);
    return 0x1a;
  }
  if (uVar3 == 0x10000000) {
    FUN_001f3ae0(lVar6,"operation aborted by callback");
    *param_3 = 0;
    return 0x2a;
  }
  if (param_2 < uVar3) {
    *param_3 = 0;
    pcVar4 = "read function returned funny value";
    goto LAB_001f9334;
  }
  uVar7 = uVar3;
  if ((*(ushort *)(lVar6 + 0x660) & 0x140) != 0x40) goto LAB_001f94a4;
  local_70 = 0;
  uStack_69 = 0;
  uVar9 = *(ulong *)(lVar6 + 0xf40) & 0x840;
  __src = &DAT_038a006b;
  if ((*(ulong *)(lVar6 + 0xf40) & 0x840) != 0) {
    __src = &DAT_0396725e;
  }
  if (*(int *)(lVar6 + 0x15a0) == 2) {
    iVar1 = 0;
    bVar10 = false;
LAB_001f940c:
    if (*(long *)(*(long *)(lVar6 + 0x1598) + 0x10) != *(long *)(lVar6 + 0x1590)) {
      __n_00 = (ulong)iVar1;
      iVar5 = 2;
      goto LAB_001f945c;
    }
    FUN_001ec82c(lVar6 + 0x1598);
    *(undefined4 *)(lVar6 + 0x15a0) = 3;
    pcVar4 = "Signaling end of chunked upload after trailers.\n";
    *(undefined8 *)(lVar6 + 0xf30) = 0;
    *(undefined8 *)(lVar6 + 0xf38) = 0;
    *(ushort *)(lVar6 + 0x660) = *(ushort *)(lVar6 + 0x660) | 4;
LAB_001f9480:
    FUN_001f3934(lVar6,pcVar4);
  }
  else {
    iVar1 = FUN_001e64cc(&local_70,0xb,"%zx%s",uVar3,__src);
    __n_00 = (ulong)iVar1;
    __dest = (void *)(*(long *)(lVar6 + 0x1e0) - (long)iVar1);
    uVar7 = uVar3 + (long)iVar1;
    *(void **)(lVar6 + 0x1e0) = __dest;
    memcpy(__dest,&local_70,__n_00);
    if (((uVar3 == 0) && (*(long *)(lVar6 + 0xf38) != 0)) && (*(int *)(lVar6 + 0x15a0) == 0)) {
      *(undefined4 *)(lVar6 + 0x15a0) = 1;
      goto LAB_001f94a4;
    }
    bVar10 = true;
    __n = 1;
    if (uVar9 == 0) {
      __n = 2;
    }
    memcpy((void *)(*(long *)(lVar6 + 0x1e0) + uVar7),__src,__n);
    iVar5 = *(int *)(lVar6 + 0x15a0);
    if (iVar5 == 2) goto LAB_001f940c;
LAB_001f945c:
    if ((uVar7 == __n_00) && (iVar5 != 1)) {
      *(ushort *)(lVar6 + 0x660) = *(ushort *)(lVar6 + 0x660) | 4;
      pcVar4 = "Signaling end of chunked upload via terminating chunk.\n";
      goto LAB_001f9480;
    }
  }
  if (bVar10) {
    lVar6 = 1;
    if (uVar9 == 0) {
      lVar6 = 2;
    }
    uVar7 = uVar7 + lVar6;
  }
LAB_001f94a4:
  *param_3 = uVar7;
  return 0;
}


