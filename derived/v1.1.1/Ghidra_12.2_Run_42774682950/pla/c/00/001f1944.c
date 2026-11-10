/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f1944; name: FUN_001f1944
 */


undefined8 FUN_001f1944(long param_1,long param_2,long param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x5d8) == *(int *)(param_3 + 0x218)) {
    *(undefined4 *)(param_1 + 0x5d8) = 0;
  }
  *(long *)(param_1 + 0x5e0) = *(long *)(param_1 + 0x5e0) - *(long *)(param_2 + 0x1520);
  *(undefined8 *)(param_2 + 0x1520) = 0;
  if ((*(int *)(param_1 + 0x5d8) == 0) &&
     (iVar3 = FUN_001efa74(param_1,param_1 + 0x550,param_4), iVar3 != 0)) {
    return 0xffffffffffffffff;
  }
  *(undefined1 *)(param_3 + 0x250) = 0;
  if (*(int *)(param_1 + 0x610) == 0) {
    if (*(char *)(param_3 + 0x21c) != '\0') {
      puVar6 = *(ulong **)(param_3 + 0x230);
      if (((puVar6 != (ulong *)0x0) && (piVar7 = (int *)*puVar6, piVar7 != (int *)0x0)) &&
         (0 < (long)puVar6[2])) {
        piVar1 = (int *)((long)piVar7 + puVar6[2]);
        do {
          iVar3 = *piVar7;
          iVar4 = FUN_001f3df8(param_1,2,piVar7 + 1,iVar3);
          if (iVar4 != 0) {
            *param_4 = iVar4;
            return 0xffffffffffffffff;
          }
          piVar7 = (int *)((long)(piVar7 + 1) + (ulong)(iVar3 + 1));
        } while (piVar7 < piVar1);
      }
      *(undefined1 *)(param_3 + 0x251) = 1;
      return 0;
    }
    FUN_001f3ae0(param_2,
                 "HTTP/2 stream %d was closed cleanly, but before getting  all response header fields, treated as error"
                 ,*(undefined4 *)(param_3 + 0x218));
  }
  else {
    if (*(int *)(param_1 + 0x610) == 7) {
      FUN_001dee08(param_1,1);
      *(ushort *)(param_2 + 0x15a4) = *(ushort *)(param_2 + 0x15a4) | 4;
      iVar3 = 0x38;
      goto LAB_001f1a88;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x218);
    uVar5 = FUN_00205bc4();
    FUN_001f3ae0(param_2,"HTTP/2 stream %d was not closed cleanly: %s (err %u)",uVar2,uVar5,
                 *(undefined4 *)(param_1 + 0x610));
  }
  iVar3 = 0x5c;
LAB_001f1a88:
  *param_4 = iVar3;
  return 0xffffffffffffffff;
}


