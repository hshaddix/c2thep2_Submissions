#Wed Apr  2 13:40:16 2025"""Automatically generated. DO NOT EDIT please"""
from GaudiKernel.GaudiHandles import *
from GaudiKernel.DataHandle import DataHandle
from AthenaCommon.Configurable import *

class AthPoolEx__PassNoneFilter( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 1,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:19'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__PassNoneFilter, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::PassNoneFilter'
  pass # class AthPoolEx__PassNoneFilter

class AthPoolEx__QueryTag( ConfigurableAlgTool ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'MonitorService' : 'MonitorSvc',
    'AuditTools' : False,
    'AuditInitialize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'AuditFinalize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgTool,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgTool,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [AlgTool] """,
    'MonitorService' : """ name to use for Monitor Service [AlgTool] """,
    'AuditTools' : """ [[deprecated]] unused [AlgTool] """,
    'AuditInitialize' : """ trigger auditor on initialize() [AlgTool] """,
    'AuditStart' : """ trigger auditor on start() [AlgTool] """,
    'AuditStop' : """ trigger auditor on stop() [AlgTool] """,
    'AuditFinalize' : """ trigger auditor on finalize() [AlgTool] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [AlgTool] """,
    'AuditRestart' : """ trigger auditor on restart() [AlgTool] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:21'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__QueryTag, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::QueryTag'
  pass # class AthPoolEx__QueryTag

class AthPoolEx__ReWriteData( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 0,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
    'ExampleHitKey' : DataHandle('StoreGateSvc+MyHits','R','ExampleHitContainer',False),
    'ExampleTrackKey' : DataHandle('StoreGateSvc+MyTracks','W','ExampleTrackContainer',False),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'ExampleHitKey' : """  [AthPoolEx::ReWriteData] """,
    'ExampleTrackKey' : """  [AthPoolEx::ReWriteData] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:14'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__ReWriteData, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::ReWriteData'
  pass # class AthPoolEx__ReWriteData

class AthPoolEx__ReadCond( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 1,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:17'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__ReadCond, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::ReadCond'
  pass # class AthPoolEx__ReadCond

class AthPoolEx__ReadData( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 0,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
    'DataHeaderKey' : DataHandle('StoreGateSvc+EventSelector','R','DataHeader',False),
    'ExampleTrackKey' : DataHandle('StoreGateSvc+MyTracks','R','ExampleTrackContainer',False),
    'ExampleHitKey' : DataHandle('StoreGateSvc+MyHits','R','ExampleHitContainer',False),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DataHeaderKey' : """  [AthPoolEx::ReadData] """,
    'ExampleTrackKey' : """  [AthPoolEx::ReadData] """,
    'ExampleHitKey' : """  [AthPoolEx::ReadData] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:15'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__ReadData, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::ReadData'
  pass # class AthPoolEx__ReadData

class AthPoolEx__ReadExampleElectron( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 0,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
    'ExampleElectronContainerName' : DataHandle('StoreGateSvc+TestContainer','R','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKey1' : DataHandle('StoreGateSvc+TestContainer.decor1','R','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKeyFloat' : DataHandle('StoreGateSvc+TestContainer.decor_float','R','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKeyHayden' : DataHandle('StoreGateSvc+TestContainer.decor_Hayden','R','xAOD::ExampleElectronContainer',False),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'ExampleElectronContainerName' : """  [AthPoolEx::ReadExampleElectron] """,
    'ExampleElectronContainerDecorKey1' : """ decorator1 key [AthPoolEx::ReadExampleElectron] """,
    'ExampleElectronContainerDecorKeyFloat' : """ decorator for float key [AthPoolEx::ReadExampleElectron] """,
    'ExampleElectronContainerDecorKeyHayden' : """ decorator for Hayden’s favorite data type (double) [AthPoolEx::ReadExampleElectron] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:23'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__ReadExampleElectron, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::ReadExampleElectron'
  pass # class AthPoolEx__ReadExampleElectron

class AthPoolEx__ReadMeta( ConfigurableAlgTool ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'MonitorService' : 'MonitorSvc',
    'AuditTools' : False,
    'AuditInitialize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'AuditFinalize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgTool,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgTool,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [AlgTool] """,
    'MonitorService' : """ name to use for Monitor Service [AlgTool] """,
    'AuditTools' : """ [[deprecated]] unused [AlgTool] """,
    'AuditInitialize' : """ trigger auditor on initialize() [AlgTool] """,
    'AuditStart' : """ trigger auditor on start() [AlgTool] """,
    'AuditStop' : """ trigger auditor on stop() [AlgTool] """,
    'AuditFinalize' : """ trigger auditor on finalize() [AlgTool] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [AlgTool] """,
    'AuditRestart' : """ trigger auditor on restart() [AlgTool] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:20'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__ReadMeta, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::ReadMeta'
  pass # class AthPoolEx__ReadMeta

class AthPoolEx__WriteCond( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 0,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
    'ExampleHitKey' : DataHandle('StoreGateSvc+MyHits','R','ExampleHitContainer',False),
    'ConditionName' : 'PedestalWriteData',
    'Weight' : 0.0000000,
    'Offset' : 0.0000000,
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'ExampleHitKey' : """  [AthPoolEx::WriteCond] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:16'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__WriteCond, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::WriteCond'
  pass # class AthPoolEx__WriteCond

class AthPoolEx__WriteData( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 0,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
    'ExampleHitKey' : DataHandle('StoreGateSvc+MyHits','W','ExampleHitContainer',False),
    'AliasKey' : DataHandle('StoreGateSvc+PetersHits','W','ExampleHitContainer',False),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'ExampleHitKey' : """  [AthPoolEx::WriteData] """,
    'AliasKey' : """  [AthPoolEx::WriteData] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:13'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__WriteData, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::WriteData'
  pass # class AthPoolEx__WriteData

class AthPoolEx__WriteExampleElectron( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 0,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
    'ExampleTrackKey' : DataHandle('StoreGateSvc+MyTracks','R','ExampleTrackContainer',False),
    'ExampleHitKey' : DataHandle('StoreGateSvc+MyHits','R','ExampleHitContainer',False),
    'ExampleElectronContainerName' : DataHandle('StoreGateSvc+TestContainer','W','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKey1' : DataHandle('StoreGateSvc+TestContainer.decor1','W','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKey2' : DataHandle('StoreGateSvc+TestContainer.decor2','W','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKeyFloat' : DataHandle('StoreGateSvc+TestContainer.decor_float','W','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKeyLongDouble' : DataHandle('StoreGateSvc+TestContainer.decor_longdouble','W','xAOD::ExampleElectronContainer',False),
    'ExampleElectronContainerDecorKeyHayden' : DataHandle('StoreGateSvc+TestContainer.decor_Hayden','W','xAOD::ExampleElectronContainer',False),
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'ExampleTrackKey' : """  [AthPoolEx::WriteExampleElectron] """,
    'ExampleHitKey' : """  [AthPoolEx::WriteExampleElectron] """,
    'ExampleElectronContainerName' : """  [AthPoolEx::WriteExampleElectron] """,
    'ExampleElectronContainerDecorKey1' : """ decorator1 key [AthPoolEx::WriteExampleElectron] """,
    'ExampleElectronContainerDecorKey2' : """ decorator2 key [AthPoolEx::WriteExampleElectron] """,
    'ExampleElectronContainerDecorKeyFloat' : """ decorator for float key [AthPoolEx::WriteExampleElectron] """,
    'ExampleElectronContainerDecorKeyLongDouble' : """ decorator for long double key [AthPoolEx::WriteExampleElectron] """,
    'ExampleElectronContainerDecorKeyHayden' : """ decorator for my favorite data type - double [AthPoolEx::WriteExampleElectron] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:22'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__WriteExampleElectron, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::WriteExampleElectron'
  pass # class AthPoolEx__WriteExampleElectron

class AthPoolEx__WriteTag( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : set(),
    'ExtraOutputs' : set(),
    'OutputLevel' : 0,
    'Enable' : True,
    'ErrorMax' : 1,
    'AuditAlgorithms' : False,
    'AuditInitialize' : False,
    'AuditReinitialize' : False,
    'AuditRestart' : False,
    'AuditExecute' : False,
    'AuditFinalize' : False,
    'AuditStart' : False,
    'AuditStop' : False,
    'Timeline' : True,
    'MonitorService' : 'MonitorSvc',
    'RegisterForContextService' : False,
    'Cardinality' : 0,
    'NeededResources' : [  ],
    'Asynchronous' : False,
    'FilterCircularDependencies' : True,
    'EvtStore' : ServiceHandle('StoreGateSvc'),
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'),
    'Key' : DataHandle('StoreGateSvc+RunEventTag','W','AthenaAttributeList',False),
    'TagKey' : DataHandle('StoreGateSvc+RunEventTag','W','TagAthenaAttributeList',False),
    'Magic' : 0,
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Asynchronous' : """ whether algorithm is asynchronous and uses Boost Fiber to suspend while offloaded code is running. [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job [unknown owner type] """,
    'Key' : """  [AthPoolEx::WriteTag] """,
    'TagKey' : """  [AthPoolEx::WriteTag] """,
  }
  __declaration_location__ = 'AthenaPoolExampleAlgorithms_entries.cxx:18'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AthPoolEx__WriteTag, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'AthenaPoolExampleAlgorithms'
  def getType( self ):
      return 'AthPoolEx::WriteTag'
  pass # class AthPoolEx__WriteTag
