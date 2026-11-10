/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003806d4; name: FUN_003806d4
 */


void FUN_003806d4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  puVar2 = PTR_DAT_04373ab0;
  if (*(int *)(param_1 + 0x6c) < 1) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  lVar7 = 0;
  if (*(int *)(lVar4 + 0x18) != 1) goto LAB_00380770;
  do {
    if (*(char *)(**(long **)(lVar4 + lVar7 * 0x30 + 0x20) + 0x41) == '\0') goto LAB_00380770;
    while( true ) {
      lVar7 = lVar7 + 1;
      if (*(int *)(param_1 + 0x6c) <= lVar7) {
        return;
      }
      if (*(int *)(lVar4 + lVar7 * 0x30 + 0x18) == 1) break;
LAB_00380770:
      if (0 < *(int *)(lVar4 + lVar7 * 0x30 + 0x18)) {
        lVar6 = 0;
        do {
          lVar4 = *(long *)(*(long *)(lVar4 + lVar7 * 0x30 + 0x20) + lVar6 * 8);
          if (*(char *)(lVar4 + 0x43) == '\0') {
            plVar5 = (long *)(*(long *)(lVar4 + 0x50) + 0x28);
          }
          else if (*(long *)(lVar4 + 0x60) == 0) {
            plVar5 = (long *)(*(long *)(lVar4 + 0x28) + 0x80);
          }
          else {
            plVar5 = (long *)(*(long *)(lVar4 + 0x60) + 0x50);
          }
          uVar1 = (int)((ulong)(lVar4 - *plVar5) >> 3) * 0x286bca1b;
          puVar3 = *(ulong **)(lVar4 + 0x30);
          uVar8 = (ulong)*(uint *)(param_2 +
                                  (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)
                                  );
          if ((puVar3 != (ulong *)0x0) &&
             (puStack_80 = PTR_LAB_04373a98, local_88 = lVar4, *puVar3 != 0xffffffffffffffff)) {
            local_68 = &local_88;
            local_70 = &puStack_80;
            local_78 = &local_70;
            std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
          switch(*(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar4 + 0x38) * 4)) {
          case 1:
          case 3:
          case 6:
            *(undefined4 *)(param_3 + uVar8) = *(undefined4 *)(lVar4 + 0x90);
            break;
          case 7:
            *(undefined1 *)(param_3 + uVar8) = *(undefined1 *)(lVar4 + 0x90);
            break;
          case 8:
            lVar4 = FUN_0034484c(lVar4);
            *(undefined4 *)(param_3 + uVar8) = *(undefined4 *)(lVar4 + 0x10);
            break;
          case 9:
            *(undefined8 *)(param_3 + uVar8) = 0;
          case 2:
          case 4:
          case 5:
            *(undefined8 *)(param_3 + uVar8) = *(undefined8 *)(lVar4 + 0x90);
            break;
          case 10:
            *(undefined8 *)(param_3 + uVar8) = 0;
          }
          lVar4 = *(long *)(param_1 + 0x30);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar4 + lVar7 * 0x30 + 0x18));
      }
    }
  } while( true );
}


