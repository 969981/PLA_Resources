/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ebea0; name: FUN_001ebea0
 */


ulong FUN_001ebea0(long *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *param_1;
  uVar2 = 0xffffffffffffffbf;
  if (param_1[0x45] != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  iVar3 = *(int *)(lVar6 + 0x180);
  if (iVar3 - 100U < 100) {
    return 0;
  }
  if ((*(byte *)(lVar6 + 0x15a4) >> 5 & 1) != 0) {
    return (ulong)(-(*(byte *)(lVar6 + 0xf42) & 1) & 0x16);
  }
  if (((*(uint *)((long)param_1 + 0x3fc) >> 7 & 1) == 0) && (param_1[0x45] == 0)) {
    uVar7 = 0;
  }
  else if ((iVar3 == 0x191) ||
          ((uVar7 = 0, iVar3 < 300 && ((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) != 0)))) {
    uVar4 = FUN_001ec0a4(lVar6 + 0x1248,uVar2);
    uVar7 = uVar4 & 0xffffffff;
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15a4) = *(ushort *)(lVar6 + 0x15a4) | 0x20;
    }
    if ((*(long *)(lVar6 + 0x1250) == 8) && (0xb < (int)param_1[0x46])) {
      FUN_001f3934(lVar6,"Forcing HTTP/1.1 for NTLM");
      FUN_001dee08(param_1,1);
      *(undefined8 *)(*param_1 + 0xa40) = 2;
    }
  }
  if (((*(uint *)((long)param_1 + 0x3fc) >> 8 & 1) == 0) ||
     ((*(int *)(lVar6 + 0x180) != 0x197 &&
      (((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) == 0 || (299 < *(int *)(lVar6 + 0x180))))))) {
LAB_001ebfcc:
    if ((uVar7 & 1) == 0) {
      if ((((*(int *)(lVar6 + 0x180) < 300) &&
           (pbVar1 = (byte *)(lVar6 + 0x1260), (*pbVar1 & 1) == 0)) &&
          (*(char *)((long)param_1 + 0x3fd) < '\0')) &&
         ((*(int *)(lVar6 + 0xa38) != 1 && (*(int *)(lVar6 + 0xa38) != 6)))) {
        lVar5 = FUN_002044f4(*(undefined8 *)(lVar6 + 0xf48));
        *(long *)(lVar6 + 0x1d0) = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        *pbVar1 = *pbVar1 | 1;
      }
      goto LAB_001ec070;
    }
  }
  else {
    uVar4 = FUN_001ec0a4(lVar6 + 0x1268,0xffffffffffffffbf);
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15a4) = *(ushort *)(lVar6 + 0x15a4) | 0x20;
      goto LAB_001ebfcc;
    }
  }
  if (((*(int *)(lVar6 + 0xa38) != 1) && (*(int *)(lVar6 + 0xa38) != 6)) &&
     (((*(byte *)((long)param_1 + 0x3fe) & 1) == 0 &&
      (uVar7 = FUN_001ec120(param_1), (int)uVar7 != 0)))) {
    return uVar7;
  }
  FUN_002044d4(*(undefined8 *)(lVar6 + 0x1d0));
  *(undefined8 *)(lVar6 + 0x1d0) = 0;
  lVar5 = FUN_002044f4(*(undefined8 *)(lVar6 + 0xf48));
  *(long *)(lVar6 + 0x1d0) = lVar5;
  if (lVar5 == 0) {
    return 0x1b;
  }
LAB_001ec070:
  uVar7 = FUN_001ec204(param_1);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  FUN_001f3ae0(lVar6,"The requested URL returned error: %d",*(undefined4 *)(lVar6 + 0x180));
  return 0x16;
}


