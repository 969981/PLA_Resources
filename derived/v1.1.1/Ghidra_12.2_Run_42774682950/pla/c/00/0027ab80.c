/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027ab80; name: FUN_0027ab80
 */


void FUN_0027ab80(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04372850;
  plVar4 = (long *)(param_1 + 0x20);
  if ((char *)*plVar4 != (char *)0x0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (0 < iVar3) {
      lVar5 = 0;
      lVar6 = 0;
      lVar7 = 1;
      cVar1 = *(char *)*plVar4;
      while( true ) {
        if (cVar1 != '\0') {
          FUN_0087d828(*(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x20) +
                                   *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + lVar5)
                        + 0x68),param_2);
          FUN_0027a298(*(long *)(param_1 + 0x20) + lVar6);
          iVar3 = *(int *)(param_1 + 0x30);
        }
        if (iVar3 <= lVar7) break;
        lVar6 = lVar6 + 0x180;
        lVar5 = lVar5 + 0x40;
        lVar7 = lVar7 + 1;
        cVar1 = *(char *)(*plVar4 + lVar6);
      }
    }
    (**(code **)(*param_3 + 0x18))(param_3,*(undefined8 *)(param_1 + 0x28));
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


