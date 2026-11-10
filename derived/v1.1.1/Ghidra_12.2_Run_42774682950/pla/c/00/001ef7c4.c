/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ef7c4; name: FUN_001ef7c4
 */


void FUN_001ef7c4(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x1e8);
  if (*(long *)(lVar5 + 0x220) != 0) {
    FUN_001ec82c(lVar5 + 0x220);
    FUN_001ec82c(lVar5 + 0x230);
    lVar2 = *(long *)(lVar5 + 0x288);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar5 + 0x290);
      while (lVar3 != 0) {
        FUN_002044d4(*(undefined8 *)(lVar2 + lVar3 * 8 + -8));
        lVar3 = *(long *)(lVar5 + 0x290) + -1;
        lVar2 = *(long *)(lVar5 + 0x288);
        *(long *)(lVar5 + 0x290) = lVar3;
      }
      FUN_002044d4();
      *(undefined8 *)(lVar5 + 0x288) = 0;
    }
  }
  if (param_1[0xaa] != 0) {
    if ((param_2 & 1) != 0) {
      iVar1 = FUN_002123cc(param_1[0xaa],0,*(undefined4 *)(lVar5 + 0x218),5);
      if (iVar1 == 0) {
        FUN_00207ddc(param_1[0xaa]);
      }
      if (*(int *)(lVar5 + 0x218) == (int)param_1[0xbb]) {
        FUN_001f3934(lVar4,"stopped the pause stream!\n");
        *(undefined4 *)(param_1 + 0xbb) = 0;
      }
    }
    if (*(long *)(lVar4 + 0x1520) != 0) {
      param_1[0xbc] = param_1[0xbc] - *(long *)(lVar4 + 0x1520);
      *(undefined8 *)(lVar4 + 0x1520) = 0;
    }
    if (0 < *(int *)(lVar5 + 0x218)) {
      iVar1 = FUN_0020b928(param_1[0xaa],*(int *)(lVar5 + 0x218),0);
      if (iVar1 != 0) {
        FUN_001f3934(lVar4,"http/2: failed to clear user_data for stream %d!\n",
                     *(undefined4 *)(lVar5 + 0x218));
      }
      *(undefined4 *)(lVar5 + 0x218) = 0;
    }
  }
  return;
}


