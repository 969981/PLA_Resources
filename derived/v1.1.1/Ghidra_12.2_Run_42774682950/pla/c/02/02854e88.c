/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02854e88; name: FUN_02854e88
 */


void FUN_02854e88(long *param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04387e88 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[8] = 0;
  param_1[9] = (long)&DAT_cbf29ce484222645;
  param_1[10] = (long)&DAT_03996322;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)&DAT_cbf29ce484222645;
  param_1[0xe] = (long)&DAT_03996322;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = (long)&DAT_cbf29ce484222645;
  param_1[0x12] = (long)&DAT_03996322;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = (long)&DAT_cbf29ce484222645;
  param_1[0x16] = (long)&DAT_03996322;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = (long)&DAT_cbf29ce484222645;
  param_1[0x25] = (long)&DAT_03996322;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_2;
  param_1[0x29] = 0;
  param_1[0x2b] = (long)&DAT_cbf29ce484222645;
  param_1[0x2c] = (long)&DAT_03996322;
  memset(param_1 + 0x2d,0,0x390);
  param_1[0x42] = 0;
  param_1[0x2f] = (long)&DAT_cbf29ce484222645;
  param_1[0x30] = (long)&DAT_03996322;
  param_1[0x41] = 0;
  param_1[0x43] = (long)&DAT_cbf29ce484222645;
  param_1[0x44] = (long)&DAT_03996322;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = (long)&DAT_cbf29ce484222645;
  param_1[0x48] = (long)&DAT_03996322;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = (long)&DAT_cbf29ce484222645;
  param_1[0x4c] = (long)&DAT_03996322;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = (long)&DAT_cbf29ce484222645;
  param_1[0x50] = (long)&DAT_03996322;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = (long)&DAT_cbf29ce484222645;
  param_1[0x54] = (long)&DAT_03996322;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = (long)&DAT_cbf29ce484222645;
  param_1[0x58] = (long)&DAT_03996322;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = (long)&DAT_cbf29ce484222645;
  param_1[0x5c] = (long)&DAT_03996322;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = (long)&DAT_cbf29ce484222645;
  param_1[0x60] = (long)&DAT_03996322;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = (long)&DAT_cbf29ce484222645;
  param_1[100] = (long)&DAT_03996322;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = (long)&DAT_cbf29ce484222645;
  param_1[0x68] = (long)&DAT_03996322;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = (long)&DAT_cbf29ce484222645;
  param_1[0x6c] = (long)&DAT_03996322;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = (long)&DAT_cbf29ce484222645;
  param_1[0x70] = (long)&DAT_03996322;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x73] = (long)&DAT_cbf29ce484222645;
  param_1[0x74] = (long)&DAT_03996322;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = (long)&DAT_cbf29ce484222645;
  param_1[0x78] = (long)&DAT_03996322;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = (long)&DAT_cbf29ce484222645;
  param_1[0x7c] = (long)&DAT_03996322;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = (long)&DAT_cbf29ce484222645;
  param_1[0x80] = (long)&DAT_03996322;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = (long)&DAT_cbf29ce484222645;
  param_1[0x84] = (long)&DAT_03996322;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x87] = (long)&DAT_cbf29ce484222645;
  param_1[0x88] = (long)&DAT_03996322;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8b] = (long)&DAT_cbf29ce484222645;
  param_1[0x8c] = (long)&DAT_03996322;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = (long)&DAT_cbf29ce484222645;
  param_1[0x90] = (long)&DAT_03996322;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x93] = (long)&DAT_cbf29ce484222645;
  param_1[0x94] = (long)&DAT_03996322;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x97] = (long)&DAT_cbf29ce484222645;
  param_1[0x98] = (long)&DAT_03996322;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9b] = (long)&DAT_cbf29ce484222645;
  param_1[0x9c] = (long)&DAT_03996322;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = (long)&DAT_cbf29ce484222645;
  param_1[0x34] = (long)&DAT_03996322;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = (long)&DAT_cbf29ce484222645;
  param_1[0x38] = (long)&DAT_03996322;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = (long)&DAT_cbf29ce484222645;
  param_1[0x3c] = (long)&DAT_03996322;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = (long)&DAT_cbf29ce484222645;
  param_1[0x40] = (long)&DAT_03996322;
  lVar6 = FUN_011ccc18(auStack_38,param_2);
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  param_1[0x22] = lVar6;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar1 = PTR_DAT_0437a0d8;
  param_1[0x24] = *(long *)PTR_DAT_0437a0d8;
  param_1[0x25] = *(long *)(puVar1 + 8);
  plVar7 = *(long **)(puVar1 + 0x18);
  param_1[0x26] = *(long *)(puVar1 + 0x10);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar8 = (long *)param_1[0x27];
  param_1[0x27] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  lVar6 = FUN_01422a54(auStack_40,param_1[0x28]);
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x23];
  param_1[0x23] = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  param_1[0x23] = lVar6;
  return;
}


