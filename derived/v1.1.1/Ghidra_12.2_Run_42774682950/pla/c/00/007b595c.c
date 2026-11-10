/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b595c; name: FUN_007b595c
 */


void FUN_007b595c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_04376e90 + 0x10);
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = PTR_DAT_04377118;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[4] = (long)param_1;
  param_1[5] = (long)"/nn.npln.hydro.v1.Datastore/CreateContent";
                    /* try { // try from 007b59d0 to 007b5b17 has its CatchHandler @ 007b5b28 */
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = lVar5;
  param_1[8] = (long)"/nn.npln.hydro.v1.Datastore/GetContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = lVar5;
  param_1[0xb] = (long)"/nn.npln.hydro.v1.Datastore/DeleteContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = lVar5;
  param_1[0xe] = (long)"/nn.npln.hydro.v1.Datastore/SearchContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x10] = lVar5;
  param_1[0x11] = (long)"/nn.npln.hydro.v1.Datastore/TrackContent";
  *(undefined4 *)(param_1 + 0x12) = 2;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = lVar5;
  param_1[0x14] = (long)"/nn.npln.hydro.v1.Datastore/TransformContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = lVar5;
  param_1[0x17] = (long)"/nn.npln.hydro.v1.Datastore/BatchCreateContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = lVar5;
  param_1[0x1a] = (long)"/nn.npln.hydro.v1.Datastore/BatchDeleteContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = lVar5;
  param_1[0x1d] = (long)"/nn.npln.hydro.v1.Datastore/BulkDeleteContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = lVar5;
  param_1[0x20] = (long)"/nn.npln.hydro.v1.Datastore/BatchTransformContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = lVar5;
  param_1[0x23] = (long)"/nn.npln.hydro.v1.Datastore/BulkTransformContent";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x25] = lVar5;
  return;
}


