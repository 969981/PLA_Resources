/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fa4f0; name: FUN_001fa4f0
 */


undefined8 FUN_001fa4f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  if ((*(long *)(param_1 + 0xf48) == 0) && (*(long *)(param_1 + 0xf28) == 0)) {
LAB_001fa550:
    FUN_001f3ae0(param_1,"No URL set!");
    uVar2 = 3;
  }
  else {
    if ((*(byte *)(param_1 + 0xf68) & 1) == 0) {
      if (*(long *)(param_1 + 0xf48) == 0) goto LAB_001fa534;
    }
    else {
      FUN_002044d4();
      *(undefined8 *)(param_1 + 0xf48) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
LAB_001fa534:
      if ((*(long *)(param_1 + 0xf28) != 0) &&
         (iVar1 = FUN_001faec0(*(long *)(param_1 + 0xf28),0,param_1 + 0xd48,0), iVar1 != 0))
      goto LAB_001fa550;
    }
    *(undefined8 *)(param_1 + 0xf48) = *(undefined8 *)(param_1 + 0xd48);
    uVar2 = FUN_00203e3c(param_1,*(undefined8 *)(param_1 + 0xbf8));
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined8 *)(param_1 + 0x1248) = *(undefined8 *)(param_1 + 0x6b0);
      *(ushort *)(param_1 + 0x15a4) =
           (ushort)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x24) & 0x80 |
           *(ushort *)(param_1 + 0x15a4) & 0xff55;
      *(undefined4 *)(param_1 + 0x14e0) = 0;
      *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x6b8);
      FUN_002044d4(*(undefined8 *)(param_1 + 0x1640));
      iVar1 = *(int *)(param_1 + 0xa38);
      *(undefined8 *)(param_1 + 0x1640) = 0;
      if ((iVar1 == 1) || (iVar1 == 6)) {
        *(undefined8 *)(param_1 + 0x1518) = 0;
      }
      else if (iVar1 == 5) {
        *(undefined8 *)(param_1 + 0x1518) = *(undefined8 *)(param_1 + 0x7d8);
      }
      else {
        *(long *)(param_1 + 0x1518) = *(long *)(param_1 + 0x6f8);
        if ((*(long *)(param_1 + 0x6f8) == -1) && (*(char **)(param_1 + 0x6e8) != (char *)0x0)) {
          sVar3 = strlen(*(char **)(param_1 + 0x6e8));
          *(size_t *)(param_1 + 0x1518) = sVar3;
        }
      }
      if (*(long *)(param_1 + 0xf58) != 0) {
        FUN_001dbf8c(param_1);
      }
      if ((*(long *)(param_1 + 0xf60) == 0) || (uVar2 = FUN_001e191c(param_1), (int)uVar2 == 0)) {
        *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 0x10;
        FUN_001e0224(param_1);
        FUN_001f2d64(param_1);
        FUN_001f2ebc(param_1);
        *(ulong *)(param_1 + 0x1250) = *(ulong *)(param_1 + 0x1250) & *(ulong *)(param_1 + 0x1248);
        *(ulong *)(param_1 + 0x1270) = *(ulong *)(param_1 + 0x1270) & *(ulong *)(param_1 + 0x1268);
        if ((*(char *)(param_1 + 0x15a4) < '\0') &&
           ((*(int *)(param_1 + 0x15a8) == 0 && (iVar1 = FUN_00204370(param_1 + 0x15a8), iVar1 != 0)
            ))) {
          uVar2 = 0x1b;
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}


